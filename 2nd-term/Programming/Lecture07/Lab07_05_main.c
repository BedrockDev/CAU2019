#include <stdio.h>

int i = 10;

int main() {
	// Doesn't bring int i from sub.c
	printf("int i in main.c %d", 10);

	return 0;
}