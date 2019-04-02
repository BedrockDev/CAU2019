#include <stdio.h>

int main() {
	int number;

	printf("Enter integer : ");
	scanf("%d", number);

	if (number % 2 == 0) {
		printf("even number\n");
	} else {
		printf("odd number\n");
	}

	return 0;
}