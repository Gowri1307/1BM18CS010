#include <stdio.h>
#define size 10

void insert(int ele, int queue[], int *r) {
	if (*r == size - 1) printf("Queue Overflow \n");
	else queue[++ (*r)] = ele;
}

int delete(int queue[],int *f, int *r) {
	if (*f > *r) {
		printf("Queue Underflow \n");
		return -999;
	}
	return queue[(*f) ++];
}

void display(int queue[], int f, int r) {
	int i;
	if (f > r) printf("Queue Underflow\n");
	else for (i = f; i <= r; i++) printf("%d \n",queue[i]); 
}

int main() {
	int queue[size];
	int f = 0, r = -1, option, ele, ch;
	do {
		printf(" 1.Insert \n 2.Deletion \n 3.Display \n");
		printf("Enter option\n");
		scanf("%d", &option);

		switch (option) {
			case 1: printf("Enter Element to be Inserted \n");
				scanf("%d", &ele);
				insert(ele, queue, &r);
				break;

			case 2: ele = delete(queue, &f, &r);
				if (ele == -999) break;
				printf("The Deleted Element is : %d \n", ele);
				break;

			case 3: display(queue, f, r);
		        	break;

			default: printf("Invalid Input \n");
		}

	printf("Try Again (1 For Yes/2 For No)? \n");
	scanf("%d", &ch);
	} while (ch == 1);

    return 0;
}
