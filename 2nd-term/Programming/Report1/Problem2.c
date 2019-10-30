// 2019-2 Programming Report 1
// Problem #2

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int gender, height, weight;
	float obesity, average;

	// printf("성별을 입력하세요. 1 (남자), 2 (여자):");
	printf("Enter gender. 1 (Men), 2 (Women): ");

	while (1) {
		if (scanf("%d", &gender) < 1) {
			// printf("오류: 입력은 1~2 사이의 숫자여야 합니다. 프로그램을 재시작하여 주세요.\n");
			printf("Error: Input type should be a number within 1 ~ 2. Please restart the program.\n");
			return -1;
		}

		if (gender < 1 || gender > 4) {
			// printf("오류: 입력은 1~2 사이의 숫자여야 합니다.\n");
			// printf("성별을 입력하세요. 1 (남자), 2 (여자):");
			printf("Error: Input type should be a number within 1 ~ 2.\n");
			printf("\nEnter gender. 1 (Men), 2 (Women): ");
		}
		else {
			break;
		}
	}

	// printf("\n신장 (200cm 이하) 과 몸무게 (100kg 이하) 를 입력하세요. :");
	printf("\nEnter height (less or equal to 200cm) and weight (less or equal to 100kg): ");

	while (1) {
		if (scanf(" %d %d", &height, &weight) < 1) {
			// printf("오류: 입력은 1~2 사이의 숫자여야 합니다. 프로그램을 재시작하여 주세요.\n");
			printf("Error: Input type should be 2 numbers. Please restart the program.\n");
			return -1;
		}

		// printf("VAL: %d %d", height, weight);

		if (height >= 0 && height <= 200 && weight >= 0 && weight <= 100) {
			break;
		}
		else if ((height < 0 || height > 200) && (weight < 0 || weight > 100)) {
			// printf("오류: 몸무게는 0~100 (kg) 사이의 숫자이고 신장은 0~200 (cm) 사이의 숫자여야 합니다.\n");
			// printf("\n신장 (200cm 이하) 과 몸무게 (100kg 이하) 를 입력하세요. :");
			printf("Error: Height should be within 0 ~ 200 (cm) and weight should be within 0 ~ 100 (kg).\n");
			printf("\nEnter height (less or equal to 200cm) and weight (less or equal to 100kg): ");
		}
		else if (height < 0 || height > 200) {
			// printf("오류: 신장은 0~200 (cm) 사이의 숫자여야 합니다.\n");
			// printf("\n신장 (200cm 이하) 과 몸무게 (100kg 이하) 를 입력하세요. :");
			printf("Error: Height should be a number within 0 ~ 200 (cm).\n");
			printf("\nEnter height (less or equal to 200cm) and weight (less or equal to 100kg): ");
		}
		else if (weight < 0 || weight > 100) {
			// printf("오류: 몸무게는 0~100 (kg) 사이의 숫자여야 합니다.\n");
			// printf("\n신장 (200cm 이하) 과 몸무게 (100kg 이하) 를 입력하세요. :");
			printf("Error: Weight should be a number within 0 ~ 100 (kg).\n");
			printf("\nEnter height (less or equal to 200cm) and weight (less or equal to 100kg): ");
		}
	}

	if (gender == 1) {
		average = height * height * 22 * 0.0001;
	}
	else if (gender == 2) {
		average = height * height * 21 * 0.0001;
	}
	else {
		// printf("오류: 평균 몸무게를 계산할 수 없습니다. 프로그램을 재시작하여 주세요.\n");
		printf("\nError: Can't calcaulate average weight. Please restart the program.\n");
		average = -1;
		return -1;
	}

	obesity = weight / average;

	printf("\n");

	if (obesity < 0.9) {
		// printf("저체중 (비만도: %.1f\%)", obesity * 100.0);
		printf("Underweight (obesity index: %.1f%%)", obesity * 100.0);
	}
	else if (obesity >= 0.9 && obesity <= 1.1) {
		// printf("정상 (비만도: %.1f\%)", obesity * 100.0);
		printf("Healthy (obesity index: %.1f%%)", obesity * 100.0);
	}
	else if (obesity > 1.1 && obesity <= 1.2) {
		// printf("과체중 (비만도: %.1f\%)", obesity * 100.0);
		printf("Overweight (obesity index: %.1f%%)", obesity * 100.0);
	}
	else if (obesity > 1.2) {
		// printf("비만 (비만도: %.1f\%)", obesity * 100.0);
		printf("Obese (obesity index: %.1f%%)", obesity * 100.0);
	}

	printf("\n");

	return 0;
}