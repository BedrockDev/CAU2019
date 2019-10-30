#include <stdio.h>

int toint(const char *str) {
	int i = 0, count = 0;

	while (1) {
		if (*(str + count) == '\0') {
			break;
		}
		if (*(str + count) >= '0' && *(str + count) <= '9') {
			i = i * 10 + (*(str + count) - '0');
		}
		else {
			break;
		}
		++count;
	}

	return i;
}

int main(int argc, char *argv[]) {
	if (argc == 3) {
		printf("%s + %s = %d\n", argv[1], argv[2], toint(argv[1]) + toint(argv[2]));
	}
	else if (argc > 3) {
		printf("Too many arguments supplied.\n");
	}
	else {
		printf("One argument expected.\n");
	}

	return 0;
}