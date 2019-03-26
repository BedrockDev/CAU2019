#include <stdio.h> 

int main() { 
	int num1, num2;

	num1 = 7; 
	num2 = (num1--) + 5; // postfix operator
	
	printf("num1 : %d\n", num1); 
	printf("num2 : %d\n", num2);

	return 0;
}