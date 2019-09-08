#include <stdio.h>
#include "myheader.h"

int main() {
	float d;
	scanf_s("%f", &d);

	printf("지름: %.2f\n", d);
	printf("면적: %.2f\n", d * d * PI);
	printf("둘레: %.2f\n", d * 2 * PI);

	return 0;
}
