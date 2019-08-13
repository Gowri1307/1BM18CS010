#include <stdio.h>

void push(int stack[100], int *top) {
	if (*top == 99) {
		printf("Stack Overflow \n");
	} else {
		scanf("%d", &stack[++*top]);
		}	
}

int pop(int stack[100], int *top) {
	if (*top == -1) {
		printf("Stack Underflow \n");
		return -999;
	} else {
		return stack[*top--];
		}
}

void display(int stack[100], int top) {
	int i;

	if (top == -1) {
		printf("Stack Underflow \n");
	} else {
		for (i = 0; i < top; ++i) {
			printf("\n %d \n", stack[i]);
		}
	}
}

int main() {

	int stack[100], top = -1, i, n, choice, doover;

	printf("Enter Number of Elements in Array \n");
	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
		scanf("%d", &stack[i]);
		++top;
	}
	
	do {
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");

		scanf("%d", &choice);

		switch(choice) {

			case 1: push(stack, &top);
				break;

			case 2: if (pop(stack, &top) != -999) printf("Popped Element \n");
				break;

			case 3: display(stack, top);
				break;

			default: printf("Error \n");

		}
		
		printf("Try Again? (1 for yes /2 for no)\n");
		scanf("%d", &doover);

	} while (doover == 1);

	return 0;

}
