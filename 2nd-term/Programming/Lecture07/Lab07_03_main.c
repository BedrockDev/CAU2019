#include <stdio.h>

extern int result;

int main() {
	sum(1, 2);

	printf("Sum of 1 and 2 using sum() = %d", result);

	return 0;
}