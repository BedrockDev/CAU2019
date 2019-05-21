#include <stdio.h>
#define MAX 3

int main() {
	int var[] = { 10, 100, 200 };
	int *ptr[MAX];
	int i;

	for (i = 0; i < MAX; i++) {
		ptr[i] = &var[i]; /* assign the address of integer. */
	}

	for (i = 0; i < MAX; i++) {
		printf("Value of var[%d] = %d\n", i, *ptr[i]);
	}

	return 0;
}
