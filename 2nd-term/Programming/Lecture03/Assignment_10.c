#include <stdio.h>

int main() {
	int score[5][4] = { {97, 90, 88, 95}, {76, 89, 75, 83}, {60, 70, 88, 82}, {83, 89, 92, 85}, {75, 73, 72, 78} };

	for (int i = 0; i < 5; i++) {
		int sum = 0;

		for (int j = 0; j < 4; j++) {
			sum += score[i][j];
		}

		printf("Student %d: Total score %d, average score %.2f\n", i + 1, sum, sum / 4.0);
	}

	return 0;
}