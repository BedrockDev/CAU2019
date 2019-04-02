#include <stdio.h> 

int main() {
	int x, num = 0;

	scanf("%d", &x);

	switch (x) {
	case -1:
		num--;
		break;
	case 1:
		num++;
		break;
	default:
		num = 0;
		break;
	}

	printf("%d", num);

	return 0;
}