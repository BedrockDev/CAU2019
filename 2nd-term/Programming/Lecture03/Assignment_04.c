#include <stdio.h>

int main() {
	double v1, v2;

	printf("Input v1 and v2: ");
	scanf_s("%lf %lf", &v1, &v2);

	double* p1 = &v1, * p2 = &v2;

	printf("v1 + v2 = %.2lf\n", *p1 + *p2);
	printf("v1 - v2 = %.2lf\n", *p1 - *p2);
	printf("v1 * v2 = %.2lf\n", *p1 * *p2);
	printf("v1 / v2 = %.2lf\n", *p1 / *p2);

	return 0;
}