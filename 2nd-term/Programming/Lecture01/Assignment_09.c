#include <stdio.h>

int main() {
	float h, w;
	scanf_s("%f %f", &h, &w);

	printf("%12.3f\n", h * w);
	printf("%-12.3f", h * w / 2);
	printf("test");

	return 0;
}
