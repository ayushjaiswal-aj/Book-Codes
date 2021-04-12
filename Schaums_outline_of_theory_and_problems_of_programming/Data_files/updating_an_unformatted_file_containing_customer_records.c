#include <stdio.h>
#include <string.h>

typedef struct {
	int month;
	int day;
	int year;
} date;

typedef struct {
	char name[80];
	char street[80];
	char city[80];
	int acct_no;
	char acct_type;
	float oldbalance;
	float newbalance;
	float payment;
	date lastpayment;
} record;

record update(record customer);

FILE *ptold, *ptnew;
int month, day, year;

int main(void){
	record customer;
	ptold = fopen("data.old", "r");
	if (ptold == NULL){
		printf("ERROR - cannot open the designed read file\n");
	}
	else {
		ptnew = fopen("data.new", "w");

		printf("CUSTOMER BILLING SYSTEM - UPDATE\n\n");
		printf("Please enter toda\'s date (mm/dd/yyyy): ");
		scanf("%d/%d/%d", &month, &day, &year);
	
		fread(&customer, sizeof(record), 1, ptold);

		while (! feof(ptold) ){
			customer = update(customer);
			fwrite(&customer, sizeof(record), 1, ptnew);
			fread(&customer, sizeof(record), 1, ptold);
		}
		fclose(ptold);
		fclose(ptnew);
	}
}

record update(record customer){
	printf("\n\nName: %s", customer.name);
	printf("	Account number: %d\n", customer.acct_no);
	printf("\nOld balance: %7.2f", customer.oldbalance);
	printf("%f", customer.payment);
	
	if (customer.payment > 0){
		customer.lastpayment.month = month;
		customer.lastpayment.day = day;
		customer.lastpayment.year = year;
		customer.acct_type = (customer.payment < 0.1 * customer.oldbalance) ? 'o' : 'C';
	}
	else {
		customer.acct_type = (customer.oldbalance > 0) ? 'D' : 'C';
	}
	customer.newbalance = customer.oldbalance - customer.payment;
	printf("New balance: %7.2f", customer.newbalance);
	
	printf("	Account status: ");
	switch (customer.acct_type){
		case 'C':
			printf("CURRENT\n");
			break;
		case 'o':
			printf("OVERDUE\n");
			break;
		case 'D':
			printf("DELINQUENT\n");
			break;
		default:
			printf("ERROR\n");
	}

	return (customer);
}
