#include <stdio.h>

int main(void) {
	int sum = 0;
	int *ptr, a, b;
	ptr = &sum;

	scanf("%d", &a);
	scanf("%d", &b);

	*ptr += a;
	*ptr += b;

	printf("Sum of entered numbers : %d", *ptr);
}