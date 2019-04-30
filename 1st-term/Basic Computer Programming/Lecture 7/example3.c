#include <stdio.h>

int main(void) {
	int num = 10; //integer variable

	printf("Value of num before function call: %d\n", num);
	add20(&num); //pass by reference

	printf("Value of num after function call: %d\n", num);

	return 0;
}

//function definition
void add20(int *n) {
	*n = 20;

	printf("Inside add10(): Value %d\n", *n);
}