#include <stdio.h>

int main() {
	int i = 0, j = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (j <= i) {
				printf("+");
			}
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 5; i++) {
		for (j = 5; j > 0; j--) {
			if (j > i) {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}