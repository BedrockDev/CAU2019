#include <stdio.h>
int main() {
	// an array with 5 elements
	double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
	double *p;
	int i;

	p = &balance;
	// output each array element's value
	//Array values using pointer
	for (int i = 0; i < 5; i++) {
		printf("%.1f\t", *(p + i));
	}
	printf("\n");

	//Array values using balance as address
	for (int i = 0; i < 5; i++) {
		printf("%u\t", &balance[i]);
	}
	printf("\n");

	return 0;
}