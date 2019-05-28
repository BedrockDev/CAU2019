#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;

	int* arr = (int*)malloc(sizeof(int) * 5);

	for (i = 0; i < 5; i++) {
		arr[i] = i + 2;
		printf("element%d: %d\n", i + 1, arr[i]);
	}

	printf("\n");

	realloc(arr, sizeof(int) * 8);

	for (i = 0; i < 3; i++) {
		arr[i + 5] = i + 1;
		printf("element%d: %d\n", i + 1, arr[i + 5]);
	}

	int sum = 0;

	for (i = 0; i < 8; i++) {
		sum += arr[i];
	}

	printf("The sum of array is : %d", sum);

	free(arr);

	return 0;
}