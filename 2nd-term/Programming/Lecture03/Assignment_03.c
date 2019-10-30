#include <stdio.h>

int main() {
	double value;
	int* v1 = &value;
	int* v2 = v1 + 1;

	printf("Input v1 and v2: ");
	scanf_s("%d %d", v1, v2);

	printf("v1 + v2 = %d\n", *v1 + *v2);
	printf("v1 - v2 = %d\n", *v1 - *v2);
	printf("v1 * v2 = %d\n", *v1 * *v2);
	printf("v1 / v2 = %d\n", *v1 / *v2);

	return 0;
}