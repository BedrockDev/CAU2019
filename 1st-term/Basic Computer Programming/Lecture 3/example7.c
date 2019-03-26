#include <stdio.h>

int main() {
	int x = 10;   // integer x
	char y = 'a'; // character c

	// y implicitly converted to int (4 byte)
	// value of ASCII 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;
	printf("x = %d, z = %f", x, z);

	return 0;
}