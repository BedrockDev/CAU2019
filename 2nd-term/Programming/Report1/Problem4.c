// 2019-2 Programming Report 1
// Problem #4

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	float a, b;
	char operand;
	int success;

	// printf("2개의 실수를 입력하세요. :");
	printf("Enter 2 real numbers: ");

	do {
		success = scanf("%f %f", &a, &b);

		if (success == 0) {
			// printf("오류: 입력은 2개의 실수여야 합니다.\n");
			printf("Error: Input type should be 2 real numbers.\n\n");
			// 입력 버퍼 클리어
			scanf("%*[^\n]");
			// printf("2개의 실수를 입력하세요. :");
			printf("Enter 2 real numbers: ");
		}

	} while (!success);

	// printf("연산 종류를 입력하세요. :");
	printf("Enter operand (+ - * /): ");

	do {
		success = scanf(" %c", &operand);

		if (operand != '+' && operand != '-' && operand != '*' && operand != '/') {
			success = 0;
		}

		if (success == 0) {
			// printf("오류: 입력은 연산자 문자여야 합니다.\n");
			printf("Error: Input type should be operand character (+ - * /).\n\n");
			// 입력 버퍼 클리어
			scanf("%*[^\n]");
			// printf("연산 종류를 입력하세요. :");
			printf("Enter operand (+ - * /): ");
		}

	} while (!success);

	printf("\n");
	printf("%.2f %c %.2f = ", a, operand, b);

	switch (operand) {
	case '+': 
		printf("%.2f", a + b);
		break;
	case '-':
		printf("%.2f", a - b);
		break;
	case '*':
		printf("%.2f", a * b);
		break;
	case '/':
		printf("%.2f", a / b);
		break;
	}

	printf("\n");

	return 0;
}