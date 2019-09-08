#include <stdio.h>

int main() {
	char ch = getchar();

	putchar(ch);
	printf("\n%c", ch);
	printf("\nCode: %d, %o, %x", ch, ch, ch);

	return 0;
}
