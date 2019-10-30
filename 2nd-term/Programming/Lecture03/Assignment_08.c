#include <stdio.h>
#define SIZE 5

int main() {
	double arr[] = { 98.56, 78.62, 78.69, 89.32, 95.29 };
	double sum = 0;

	printf("arr[] = ");

	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
		printf("%.2lf ", arr[i]);
	}

	printf("\n\nTotal: %.2lf\n", sum);
	printf("Average: %.2lf\n", sum / SIZE);

	return 0;
}