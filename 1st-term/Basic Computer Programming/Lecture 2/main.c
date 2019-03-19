#include <stdio.h>

extern int num1;

int main() {
	printf("%d\n", num1);
	// printNumber(); // this should work on same project (VS project probably, but then the extern is redundant), not on gcc as tested

	return 0;
}