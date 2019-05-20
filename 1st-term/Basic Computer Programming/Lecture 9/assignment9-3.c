#include <stdio.h>
#define SIZE 3

void copy(int* from, int* to, int size) {
	for (int i = 0; i < size; i++) {
		*(to + i) = *(from + i);
	}
}

void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));
	}

	printf("\n");
}

int main() {
	int a[SIZE];
	a[0] = 15;
	a[1] = 10;
	a[2] = 12;

	int b[sizeof(a) / sizeof(int)];

	copy(a, b, SIZE);

	printf("The elements stored in the first array are: ");
	print(a, SIZE);
	printf("The elements copied into the second array are: ");
	print(b, SIZE);

	return 0;
}