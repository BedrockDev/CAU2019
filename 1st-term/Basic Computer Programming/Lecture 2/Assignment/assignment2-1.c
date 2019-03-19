#include <stdio.h>

int main() {
	int n1 = +2147483647; // Max value
	int n2 = -2147483648; // Min value
	printf("before overflow : %d\n", n1);

	n1 = n1 + 100; // Overflow occurs
	printf("after overflow : %d\n", n1);
	printf("before underflow : %d\n", n2);

	n2 = n2 – 100; // Underflow occurs
	printf("after underflow : %d\n", n2);

	return 0;
}