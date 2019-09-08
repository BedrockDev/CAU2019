#include <stdio.h>

int main() {
	float h, w;
	scanf_s("%f %f", &h, &w);

	printf("%*.3f\n", 12, h * w);
	printf("%.3f", h * w / 2);

	return 0;
}
