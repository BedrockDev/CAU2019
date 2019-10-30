#include <stdio.h>
#include <stdlib.h>

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

int main() {
	char s1[15];
	printf("Enter string to convert to integer: ");
	gets(s1);

	printf("Result using atoi(): %d\n", atoi(s1));
	printf("Result using toint(): %d\n", toint(s1));

	return 0;
}