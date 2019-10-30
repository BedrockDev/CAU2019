#include <stdio.h>
#include <string.h>

int mystrlen(const char *p) {
	int count = 0;
	while (1) {
		if (*(p + count++) == '\0')
			break;
	}
	return count - 1;
}

int main() {
	char str[100];

	printf("Enter string: ");
	gets(str);

	printf("\nLength: %d", mystrlen(str));
	printf("\nLength: %d\n", strlen(str));

	return 0;
}