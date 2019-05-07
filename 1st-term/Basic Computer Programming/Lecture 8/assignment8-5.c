#include <stdio.h>

void add(int *sum, int val);

int main(void) {
	int sum = 0;
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	add(&sum, a);
	add(&sum, b);

	printf("Sum of entered numbers : %d", sum);
}

void add(int *sum, int val) {
	*sum += val;
	printf("Address of sum = %d, %d\n", &sum, sum);
}