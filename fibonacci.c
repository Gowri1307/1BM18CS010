#include <stdio.h>

int fib(int x) {
	if (x == 1) return 0;
	else if (x == 2) return 1;
	else return (fib(x - 1) + fib(x - 2));
}

int main() {
	int n;
  
	printf("Enter nth Term \n");
	scanf("%d", &n);
	printf("Value of %d term is %d", n, fib(n));

  return 0;
}
