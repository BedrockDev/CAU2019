#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[100];
	char str2[100];

	printf("Input the string: ");
	scanf("%s", &str1);

	strcpy(str2, str1);

	printf("The first string is: %s\n", str1);
	printf("The second string is: %s\n", str2);
	printf("Number of characters copied: %d\n", strlen(str2));

	printf("\n");

	return 0;
}