#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 

int main() { 
	int x, y, result; 

	printf("Enter two integers: "); 
	scanf("%d %d", &x, &y);

	result = x + y; 
	printf("%d + %d = %d\n", x, y, result);

	result = x - y; 
	printf("%d - %d = %d\n", x, y, result);

	result = x * y; 
	printf("%d * %d = %d\n", x, y, result);

	result = x / y; 
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}