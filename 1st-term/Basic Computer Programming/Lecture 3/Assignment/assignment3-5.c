#include <stdio.h> 

int main() { 
	int x = 3;
	int y = 2; 
	
	printf("%d\n", (x > y) ? x : y); // when true, return front
	printf("%d\n", (x < y) ? x : y); // when false, return latter

	return 0;
}