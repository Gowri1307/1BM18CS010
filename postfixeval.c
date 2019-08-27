#include<stdio.h>
#include <math.h>

void push(float ele,float stack[100], int *top) {
	if(*top == 99) printf("Stack Overflow \n");
	else stack[++(*top)] = ele;
}

float pop(float stack[100], int *top) {
	if(*top == -1) printf("Stack Underflow \n");
	else return stack[(*top)--];
}

float oper(float op1, float op2, char op) {
	if(op == '+') return (op1 + op2);
	else if(op == '-') return (op1 - op2);
	else if(op == '*') return (op1 * op2);
	else if(op == '/') return (op1 / op2);
	else if(op == '^') return (pow(op1, op2));
	else return 0;
}

int main() {
	float stack[100], op3,op1,op2;
	int i = 0,top = -1;
	char expr[100];
	
	printf("Postfix Expression: \n");
	scanf("%s",expr);
	
	while (expr[i] != '\0') {
		if (expr[i] >= '0'&& expr[i] <= '9')
			push((expr[i]-'0'), stack, &top);
		else {
			op2 = pop(stack, &top);
			op1 = pop(stack, &top);
			op3 = oper(op1, op2, expr[i]);
			push(op3, stack, &top);
		}
		i++;
	}
	printf("Answer is: %f", pop(stack, &top));
	
	return 0;
}


