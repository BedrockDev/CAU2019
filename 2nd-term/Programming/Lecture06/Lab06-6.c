#include <stdio.h>
#include <ctype.h>

void reversecase(char *str) {
	int i = 0, count = 0;

	while (1) {
		if (*(str + count) == '\0') {
			break;
		}
		if (*(str + count) >= 'a' && *(str + count) <= 'z') {
			*(str + count) = (char)toupper(*(str + count));
		}
		else if (*(str + count) >= 'A' && *(str + count) <= 'Z') {
			*(str + count) = (char)tolower(*(str + count));
		}
		++count;
	}
}

int main(int argc, char *argv[]) {
	char s[100];
	printf("Enter string to reverse case: ");
	gets(s);

	reversecase(s);
	printf("Result using reversecase():\n%s\n", s);

	return 0;
}