#include <stdio.h>
#include <stdlib.h>

typedef int (*fptr_operation)(int, int);
fptr_operation operations[8] = {NULL};

int add(int n1, int n2){
	return n1+n2;
}

int sub(int n1, int n2){
	return n1-n2;
}

int mul(int n1, int n2){
	return n1*n2;
}

int dvd(int n1, int n2){
	return n1/n2;
}

int rem(int n1, int n2){
	return n1%n2;
}

//bitwise and
int and(int n1, int n2){
	return n1&n2;
}

//bitwise or
int or(int n1, int n2){
	return n1|n2;
}

//bitwise xor
int xor(int n1, int n2){
	return n1^n2;
}

void initialize_operation_array(){
	operations[0] = add;
	operations[1] = sub;
	operations[2] = mul;
	operations[3] = dvd;
	operations[4] = rem;
	operations[5] = and;
	operations[6] = or;
	operations[7] = xor;
}

int select_op(char opcode){
	switch (opcode){
		case '+': return 0;
		case '-': return 1;
		case '*': return 2;
		case '/': return 3;
		case '%': return 4;
		case '&': return 5;
		case '|': return 6;
		case '^': return 7;
	}
}

int evaluate(char opcode, int n1, int n2){
	fptr_operation  operation = NULL;
	int op = select_op(opcode);
	operation = operations[op];
	return operation(n1, n2);
}

int main(void){
	initialize_operation_array();
	
	printf("+: %d\n", evaluate('+', 48, 12));
	printf("*: %d\n", evaluate('*', 48, 12));
	printf("-: %d\n", evaluate('-', 48, 12));
	printf("/: %d\n", evaluate('/', 48, 12));
	printf("%%: %d\n", evaluate('%', 48, 12));
	printf("&: %d\n", evaluate('&', 48, 12));
	printf("|: %d\n", evaluate('|', 48, 12));
	printf("^: %d\n", evaluate('^', 48, 12));

	return 0;
}
