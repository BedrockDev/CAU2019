#include <stdio.h>

void print_rep(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] != 0) {
			int target = arr[i];
			int occurence = 0;

			for (int j = 0; j < size; j++) {
				if (arr[j] == target) {
					occurence++;
					arr[j] = 0;
				}
			}

			if (occurence > 1) {
				printf("%d ", target);
			}
		}
	}
}

int main() {
	int a[] = { 1, 6, 4, 6, 8, 3, 4 };

	printf("The repeating elements are:");
	print_rep(a, sizeof(a) / sizeof(int));

	return 0;
}