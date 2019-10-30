#include <stdio.h>
#define SIZE 5

void printArr(int* arr, int size) {
	printf("{ ");
	for (int i = 0; i < size; i++) {
		if (i == size - 1) {
			printf("%d }\n", *(arr + i));
		}
		else {
			printf("%d, ", *(arr + i));
		}
	}
}

int compareArr(int* a, int* b, int size) {
	for (int i = 0; i < size; i++) {
		if (*(a + i) != *(b + i)) {
			// array is not a duplicate
			return 0;
		}
	}
	// array is a duplicate
	return 1;
}

int main() {
	int a[] = { 4, 7, 9, 3, 6 };
	int b1[] = { 4, 7, 9, 3, 6 };
	int b2[] = { 10, 20, 30, 40, 50 };
	int b3[] = { 4, 7, 9, 3, 7 };

	printf("a[]  = "); printArr(&a, SIZE);

	printf("\nb1[] = "); printArr(&b1, SIZE);
	compareArr(&a, &b1, SIZE) ? printf("a[] and b1[] is the same\n") : printf("a[] and b1[] is not the same\n");

	printf("\nb2[] = "); printArr(&b2, SIZE);
	compareArr(&a, &b2, SIZE) ? printf("a[] and b2[] is the same\n") : printf("a[] and b2[] is not the same\n");

	printf("\nb3[] = "); printArr(&b3, SIZE);
	compareArr(&a, &b3, SIZE) ? printf("a[] and b3[] is the same\n") : printf("a[] and b3[] is not the same\n");

	return 0;
}