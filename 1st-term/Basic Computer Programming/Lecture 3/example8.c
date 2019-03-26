#include <stdio.h>

int main() {
	double x = 3.5;
	double y = 2.7;
	double below_point;
	below_point = (x * y) - (int)(x * y);
	printf("Below point = %.2f\n", below_point);
	
	printf("Integer number of x = %d\n", (int)x);

	return 0;
}