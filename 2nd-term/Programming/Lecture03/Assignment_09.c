#include <stdio.h>

int main() {
	int occurence[10] = { 0 };

	for (int i = 0; i < 20; i++) {
		int input;

		printf("[%2d] Input number (0~9): ", i + 1);
		scanf_s("%d", &input);

		while (input > 9 || input < 0) {
			printf("Error, input number (0~9): ");
			scanf_s("%d", &input);
		}

		// increase occurence count
		occurence[input]++;
	}

	int max = 0;

	for (int i = 0; i < 10; i++) {
		if (occurence[max] < occurence[i]) {
			max = i;
		}
	}

	printf("\nNumber with the most occurence was number %d, repeating %d times\n", max, occurence[max]);

	return 0;
}