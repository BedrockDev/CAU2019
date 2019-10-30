#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	while (1) {
		int choice = -1;
		int computer = -1;

		while (1) {
			printf("Rock [1] Scissors [2] Paper [3] Quit [0]: ");
			scanf("%d", &choice);
			srand(time(NULL));
			computer = (rand() % 3) + 1;

			if (choice >= 0 && choice <= 3) {
				break;
			}
			else {
				printf("Error: number should be between 0 and 3\n");
			}
		}

		if (choice == 0) {
			break;
		}
		
		switch(computer) {
		case 1:
			switch (choice) {
			case 1:
				printf("You: Rock, CPU: Rock, Duel.\n");
				break;
			case 2:
				printf("You: Scissors, CPU: Rock, You lose.\n");
				break;
			case 3:
				printf("You: Paper, CPU: Rock, You win.\n");
				break;
			}
			break;
		case 2:
			switch (choice) {
			case 1:
				printf("You: Rock, CPU: Scissors, You win.\n");
				break;
			case 2:
				printf("You: Scissors, CPU: Scissors, Duel.\n");
				break;
			case 3:
				printf("You: Paper, CPU: Scissors, You lose.\n");
				break;
			}
			break;
		case 3:
			switch (choice) {
			case 1:
				printf("You: Rock, CPU: Paper, You lose.\n");
				break;
			case 2:
				printf("You: Scissors, CPU: Paper, You win.\n");
				break;
			case 3:
				printf("You: Paper, CPU: Paper, Duel.\n");
				break;
			}
			break;
		}
	}

	return 0;
}