#include <stdio.h>
#define LEN 7

int main() {
	int *p;
	int arr[LEN] = { 11, 22, 33, 44, 55, 66, 77 };

	p = &arr;

	for (int i = 0; i < LEN; i++) {
		printf("Element %d: %d\n", i, *(p + i));
	}

	return 0;
}