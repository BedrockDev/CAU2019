#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100];
	char count[26] = { 0 };

	printf("Input the string: ");
	scanf("%s", &str);

	for (int i = 0; i < strlen(str); i++) {
		if ('A' <= str[i] <= 'Z') {
			count[str[i] - 'A'] += 1; 
		}

		if ('a' <= str[i] <= 'z') {
			count[str[i] - 'a'] += 1;
		}
	}

	int max_index = 0;

	for (int i = 0; i < 26; i++) {
		if (count[i] != 0) {
			printf("\n'%c': %d", 'a' + i, count[i]);
			if (count[max_index] < count[i]) {
				max_index = i;
			}
		}
	}

	if (count[max_index] != 0) {
		printf("\n\nMost occurence was '%c' with %d occurences\n", 'a' + max_index, count[max_index]);
	}

	return 0;
}