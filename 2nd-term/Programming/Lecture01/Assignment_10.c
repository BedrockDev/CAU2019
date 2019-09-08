#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("Че: %d\n", a + b);
	printf("ЦђБе: %.2f", (float)(a + b) / 2);

	return 0;
}
