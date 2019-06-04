#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100];
	char count[26];

	printf("Input the string: ");
	scanf("%s", &str);

	for (int i = 0; i < strlen(str); i++) {
		if ('A' <= str[i] <= 'Z') {
			count[str[i] - 'A'] += 0; 
		}

		if ('a' <= str[i] <= 'z') {

		}
	}

	printf("\n");

	return 0;
}