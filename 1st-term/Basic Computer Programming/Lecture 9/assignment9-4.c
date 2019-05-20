#include <stdio.h>
#define SIZE 5

int max(int input[]) {
	int max = input[0];
	for (int i = 0; i < SIZE; i++) {
		if (max < input[i]) {
			max = input[i];
		}
	}

	return max;
}

int min(int input[]) {
	int min = input[0];
	for (int i = 0; i < SIZE; i++) {		 
		if (min > input[i]) {
			min = input[i];
		}
	}

	return min;
}

int main() {
	int a[SIZE];
	a[0] = 45;
	a[1] = 25;
	a[2] = 21;
	a[3] = 11;
	a[4] = 5;

	printf("Maximum element is: %d\n", max(a));
	printf("Minimum element is: %d", min(a));

	return 0;
}