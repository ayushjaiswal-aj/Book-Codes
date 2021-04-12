#include <stdio.h>
#include <string.h>

#define TRUE 1

typedef struct{
	int month;
	int day;	
	int year;
} date;

typedef struct{
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

record readscreen(record customer);

FILE *fpt;

int main(void){
	int flag = TRUE;
	record customer;

	fpt = fopen("data.bin", "w");

	printf("CUSTOMER BILLING SYSTEM - INITIALIZATION \n\n");
	printf("Please entry today\'s date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &customer.lastpayment.month, &customer.lastpayment.day, &customer.lastpayment.year);

	customer.newbalance = 0;
	customer.payment = 0;
	customer.acct_type = 'C';

	while (flag){
		printf("\nName (enter \'END\' when finished): ");
		scanf(" %[^\n]", customer.name);
		if (strcmp(customer.name, "END") == 0){
			break;
		}
		customer = readscreen(customer);
		fwrite(&customer, sizeof(record), 1, fpt);
	}

	fclose (fpt);
}

record readscreen(record customer){
	printf("street: ");
	scanf(" %[^\n]", customer.street);
	printf("City: ");
	scanf(" %[^\n]", customer.city);
	printf("Account number: ");
	scanf("%d", &customer.acct_no);
	printf("Current balance: ");
	scanf("%f", &customer.oldbalance);
	return (customer);
}
