#include <stdio.h>
#define size 10

void insert(int item, int *r, int q[]) {
	if (*r == size - 1) {
		printf("Queue Overflow \n");
		return;
	}
	
	q[++(*r)] = item;
}

int main() {
	int burst[size];
	int i, proc, tim;
	int rear = -1;
	
	printf("Enter Number of processes \n");
	scanf("%d", &proc);
	printf("Enter Burst Time of Each Process \n");
	
	for (i = 0; i < proc; i++) {
		scanf("%d", &tim);
		insert(tim, &rear, burst);
	}
	
	printf("Process 1 Starts at 0 & Ends at %d Second \n", burst[0]);	
	
	for (i = 1; i < proc; i++) {
		burst[i] = burst[i-1] + burst[i];
		printf("Process %d Starts at %d & Ends at %d Second \n", i + 1, burst[i-1], burst[i]);
	}
	return 0;
}
