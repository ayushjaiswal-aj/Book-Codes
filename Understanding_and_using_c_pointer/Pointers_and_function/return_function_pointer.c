#include <stdio.h>
#include <stdlib.h>

typedef int (*fptr_operation) (int, int);

int add(int n1, int n2){
	return n1+n2;
}

int sub(int n1, int n2){
	return n1-n2;
}

fptr_operation select_op(char opcode){
	switch (opcode){
		case '+': return add;
		case '-': return sub;
	}
}

int evaluate(char opcode, int n1, int n2){
	fptr_operation operation = select_op(opcode);
	return operation(n1, n2);
}

int main(void){
	printf("%d\n", evaluate('+', 5, 6));
	printf("%d\n", evaluate('-', 5, 6));

	return 0;
}
