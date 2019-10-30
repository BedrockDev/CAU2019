#include <stdio.h>

int main() {
	int a[] = { 4, 7, 9, 3, 6 };
	int b[] = { 10, 20, 30, 40, 50, 60 };

	printf("a[] = { ");
	int a_size = sizeof(a) / sizeof(int);

	for (int i = 0; i < a_size; i++) {
		if (i == a_size - 1) {
			printf("%d }\n", a[i]);
		}
		else {
			printf("%d, ", a[i]);
		}
	}

	printf("b[] = { ");
	int b_size = sizeof(b) / sizeof(int);

	for (int i = 0; i < b_size; i++) {
		if (i == b_size - 1) {
			printf("%d }\n", b[i]);
		}
		else {
			printf("%d, ", b[i]);
		}
	}

	int index;

	printf("\nInput index number to copy: ");
	scanf_s("%d", &index);

	printf("\nResults: b[] = { ");
	for (int i = 0; i < b_size; i++) {
		if (i < index) {
			b[i] = a[i];
		}
		if (i == b_size - 1) {
			printf("%d }\n", b[i]);
		}
		else {
			printf("%d, ", b[i]);
		}
	}

	return 0;
}