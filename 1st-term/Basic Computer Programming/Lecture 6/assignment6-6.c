#include <stdio.h>
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

int main() {
	int a = 3, b = 7;

	printf("Max: %d\n", MAX(a, b));
	printf("Min: %d\n", MIN(a, b));

	return 0;
}