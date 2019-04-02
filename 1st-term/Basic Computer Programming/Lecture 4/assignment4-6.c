#include <stdio.h> 

int main() {
	int x = 0, y = 0;
	char code;

	scanf("%c", &code);

	if (code == 'X') {
		x++;
	} else if (code == 'Y') {
		y++;
	} else {
		x = y = 0;
	}

	printf("x = %d. y = %d", x, y);

	return 0;
}