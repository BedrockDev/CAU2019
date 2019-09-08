#include <stdio.h>

int main() {
	float pyeong = 3.305785;
	int s1, s2, s3;
	scanf_s("%d %d %d", &s1, &s2, &s3);

	printf("%d Æò = %.2f m^2 \n", s1, s1 * pyeong);
	printf("%d Æò = %.2f m^2 \n", s2, s2 * pyeong);
	printf("%d Æò = %.2f m^2 \n", s3, s3 * pyeong);

	return 0;
}
