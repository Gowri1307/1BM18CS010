#include <stdio.h>
#include <string.h>
#include <ctype.h>

void push(char ele, char stack[50], int *top) {
	if (*top == 99) printf("Stack Overflow\n");
	else stack[++(*top)] = ele;
}
char pop(char stack[50],int *top) {
	if (*top == -1) return -1;
	else return stack[(*top)--];
}
int precedence(char ele) {
	if (ele == '^') return 3;
	else if (ele == '*' || ele == '/') return 2;
	else if (ele == '+' || ele == '-') return 1;
}
int main() {
	char stack[50], infix[50];
	char e;
	int top = -1, i  = 0, j;
	
	printf("Infix Expression: ");
        scanf("%s", infix);
	
	infix[strlen(infix)] = '\0';
	
	while (infix[i] != '\0') {
		if (isalnum(infix[i])) printf("%c", infix[i]);
		else if (infix[i] == '(') push(infix[i], stack, &top);
		else if (infix[i] == ')') {
			while ((e = pop(stack,&top)) != '(') printf("%c", e);
		}
		else {
			if (precedence(stack[top]) >= precedence(infix[i])) push(infix[i], stack, &top);
			else {
				while (precedence(stack[top]) >= precedence(infix[i]))
					e = pop(stack, &top);
				push(infix[i], stack, &top);
			}
		}
		i++;
	}
	while (top != -1) printf("%c",pop(stack,&top));
	return 0;
}
