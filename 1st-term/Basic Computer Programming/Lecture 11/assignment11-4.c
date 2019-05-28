#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;

	int* ptr = (int*)malloc(sizeof(int) * 5);

	for (i = 0; i < 5; i++) {
		ptr[i] = 25 * (i + 1);
	}

	for (i = 0; i < 5; i++) {
		printf("element %d: %d\n", i + 1, ptr[i]);
	}

	free(ptr);

	return 0;
}