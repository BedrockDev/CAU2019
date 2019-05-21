#include <stdio.h>
#define LEN 5

int main() {
	int arr[LEN] = { 2, 3, 4, 5, 6 };
	int sum = 0;
	
	for (int i = 0; i < LEN; i++) {
		sum += *(&arr[0] + i);
	}
	
	printf("The sum of array is: %d", sum);

	return 0;
}