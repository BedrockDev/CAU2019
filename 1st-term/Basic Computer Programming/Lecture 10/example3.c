#include <stdio.h>

int main() {
	int x[3] = { 1, 2, 3 };
	int y;
	int *p = &x;

	printf("%d\n", 5 + *(p++));
	printf("%d\n", 5 + (*p)++);
	printf("%d\n", 5 + (*p));

	return 0;
}
