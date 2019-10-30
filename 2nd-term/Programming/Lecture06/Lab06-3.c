#include <stdio.h>

void delchar(char *str, const char ch) {
	int count = 0;

	while (1) {
		if (*(str + count) == ch) {
			int index = count;

			while (1) {
				if (*(str + index) == '\0') {
					break;
				}
				*(str + index) = *(str + index + 1);
				index++;
			}

			count--;
		}
		if (*(str + count) == '\0') {
			break;
		}
		count++;
	}
}

int main() {
	char s1[50];
	printf("Enter string to process: ");
	gets(s1);

	char ch;
	printf("Enter character to delete: ");
	scanf("%c", &ch);

	delchar(s1, ch);
	printf("\Result using delchar(): %s", s1);

	return 0;
}