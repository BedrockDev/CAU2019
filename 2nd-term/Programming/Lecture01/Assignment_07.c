#include <stdio.h>
#include "myheader.h"

int main() {
	float d;
	scanf_s("%f", &d);

	printf("����: %.2f\n", d);
	printf("����: %.2f\n", d * d * PI);
	printf("�ѷ�: %.2f\n", d * 2 * PI);

	return 0;
}
