#include <stdio.h>
#define SIZE 5

int main() {
	int score[SIZE];
	score[0] = 70;
	score[1] = 90;
	score[2] = 80;
	score[3] = 60;
	score[4] = 50;

	for (int i = 0; i < SIZE; i++) {
		printf("%d", score[i]);
		printf("\n");
	}

	return 0;
}