#include <stdio.h>

int main() {
	int total = 0;
	int i;

	for (i = 0; i < 10; i++) {
		total += i; // same as total = total + i
	}
	printf("Total = %d", total);

	return 0;
}