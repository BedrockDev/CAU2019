#include <stdio.h>
#define LEN 5

int main() {
	int arr[LEN] = { 1, 2, 3, 4, 5 };
	int sum = 0;

	for (int i = 0; i < LEN; i++) {
		printf("Element %d: %d\n", i, *(&arr[0] + i));
	}

	return 0;
}