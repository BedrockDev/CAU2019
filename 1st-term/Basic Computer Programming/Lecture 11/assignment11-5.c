#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr = (int *)malloc(sizeof(int) * 2);
	int i;
	int *ptr_new = (int *)malloc(0);

	*ptr = 10;
	*(ptr + 1) = 20;

	realloc(ptr_new, sizeof(int) * 3);

	*ptr_new = *ptr;
	*(ptr_new + 1) = *(ptr + 1);
	*(ptr_new + 2) = 30;

	for (i = 0; i < 3; i++)
		printf("%d ", *(ptr_new + i));

	free(ptr);
	free(ptr_new);

	return 0;
}