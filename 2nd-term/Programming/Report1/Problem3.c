// 2019-2 Programming Report 1
// Problem #3

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int input, success;

	// printf("정수를 입력하세요. :");
	printf("Enter an integer: ");

	do {
		success = scanf("%d", &input);

		if (success == 0) {
			// printf("오류: 입력은 정수여야 합니다.\n");
			printf("Error: Input type should be an integer.\n\n");
			// 입력 버퍼 클리어
			scanf("%*[^\n]");
			// printf("정수를 입력하세요. :");
			printf("Enter an integer: ");
		}

	} while (!success);

	printf("\n");
	printf("%d | ", input);

	int count = 0;
	int current;

	if (input == 0) {
		printf("0");
	}
	else {
		if (input < 0) {
			// 음수이면 부호를 앞에 출력
			printf("-");
			// 양수로 변환
			input *= -1;
		}
		while (1) {
			current = input;
			for (int i = 0; i < count; i++) {
				// 현재 자리의 값 계산
				current /= 10;
			}
			if (current == 0) {
				break;
			}
			else {
				// 값을 10으로 나눈 나머지를 출력
				printf("%d", current % 10);
				count++;
			}
		}
	}

	printf("\n");

	return 0;
}