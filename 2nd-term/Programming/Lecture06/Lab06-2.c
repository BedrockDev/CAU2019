#include <stdio.h>
#include <string.h>

void mystrcat(char *s1, const char s2[]) {
	int offset = 0;
	while (1) {
		if (*(s1 + offset) == '\0')
			break;
		++offset;
	}

	int count = 0;
	while (1) {
		if (*(s2 + count) == '\0') {
			break;
		}
		*(s1 + offset + count) = *(s2 + count);
		++count;
	}
}

int main() {
	char s1[50] = "C";

	mystrcat(s1, " Programming Language");
	printf("\nResult using mystrcat(): %s", s1);

	strcat(s1, " Programming Language");
	printf("\nResult using strcat(): %s\n", s1);

	return 0;
}