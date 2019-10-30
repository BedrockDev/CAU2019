#include <stdio.h>

int main() {
	int data1 = 10, data2 = 20;
	int* p1 = &data1, * p2 = &data2;

	int sum = 0;
	int **dp;

	dp = &p1;
	**dp = 100;
	
	dp = &p2;
	**dp = 200;
	
	sum += *p1;
	sum += *p2;

	printf("data1 using data1 = %d\tdata2 using data2 = %d\n", data1, data2);
	printf("data1 using *p1 = %d\tdata2 using *p2 = %d\n", *p1, *p2);
	printf("sum = %d\n", sum);

	return 0;
}