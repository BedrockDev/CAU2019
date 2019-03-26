#include <stdio.h>

int main() {
	int a, b, c;
	a = 2;
	b = 7;
	c = (a > b) ? a : b;

	printf("%d\n", c);

	return 0;
}