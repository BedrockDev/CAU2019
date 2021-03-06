#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number;

void setNumber() {
	srand(time(NULL));
	number = (rand() % 100) + 1;
}

int main() {
	setNumber();
	printf("A random number between 1 and 100 is defined.");

	static int max = 100;
	static int min = 1;

	while (1) {
		int guess;

		while (1) {
			printf("Your guess (%d~%d): ", min, max);
			scanf("%d", &guess);

			if (guess >= 1 && guess <= 100) {
				break;
			}
			else {
				printf("Error: value should be a number between 1 and 100");
			}
		}

		if (guess > number) {
			max = guess;
			printf("The number is smaller than %d.\n", guess);
		}
		else if (guess < number) {
			min = guess;
			printf("The number is bigger than %d.\n", guess);
		}
		else {
			printf("Congratulations! The number was %d.\n", number);
			break;
		}
	}
}