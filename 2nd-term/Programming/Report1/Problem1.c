// 2019-2 Programming Report 1
// Problem #1

#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.141592

#include <stdio.h>

int main() {
	// printf("삼각형 [1] 정사각형 [2] 사각형 [3] 원 [4]\n");
	printf("Triangle [1] Square [2] Rectangle [3] Circle [4]\n");

	int type;
	int count;

	// printf("\n면적을 구할 도형 번호를 선택하세요. >> ");
	printf("\nInput type to calculate area. >> ");

	while (1) {
		if (scanf("%d", &type) < 1) {
			// scanf 버퍼를 확실히 비울 수 있는 방법이 없어서 프로그램의 재시작이 필요함
			// 현재 문자를 입력하면 scanf 버퍼가 클리어되지 않고 계속 입력되어 무한 루프가 발생함
			// fgets 를 이용해서 한 줄 전체를 입력받고 그 후에 처리해야 함

			// printf("오류: 입력은 1~4 사이의 숫자여야 합니다. 프로그램을 재시작하여 주세요.\n");
			printf("Error: Input type should be a number within 1 ~ 4. Please restart the program.\n");
			return -1;
		}

		if (type < 1 || type > 4) {
			// printf("오류: 입력은 1~4 사이의 숫자여야 합니다.\n");
			// printf("면적을 구할 도형 번호를 선택하세요. >> ");
			printf("Error: Input type should be a number within 1 ~ 4.\n");
			printf("\nInput type to calculate area. >> ");
		}
		else {
			break;
		}
	}

	float width, height;

	switch (type) {
	case 1:
		while (1) {
			// printf("\n삼각형의 면적을 구합니다.");
			// printf("\n너비와 높이를 입력하세요.");
			printf("\nCalculating area of triangle.");
			printf(" Enter width and height. >> ");

			scanf("%f %f", &width, &height);

			if (width < 0 || height < 0) {
				// printf("오류: 너비와 높이는 음수가 아니어야 합니다.\n");
				printf("Error: Width and height should be non-negative values.\n");
			}
			else {
				break;
			}
		}

		// printf("\n너비: %.2f, 높이: %.2f, 넓이: %.2f\n", width, height, width * height * 0.5);
		printf("\nWidth: %.2f, Height: %.2f, Area: %.2f\n", width, height, width * height * 0.5);
		break;
	case 2:
		while (1) {
			// printf("\n정사각형의 면적을 구합니다.");
			// printf("\n너비를 입력하세요.");
			printf("\nCalculating area of square.");
			printf(" Enter width. >> ");

			scanf("%f", &width);

			if (width < 0) {
				// printf("오류: 너비는 음수가 아니어야 합니다.\n");
				printf("Error: Width should be non-negative values.\n");
			}
			else {
				break;
			}
		}

		// printf("\n너비: %.2f, 넓이: %.2f\n", width, height, width);
		printf("\nWidth: %.2f, Area: %.2f\n", width, width * width);
		break;
	case 3:
		while (1) {
			// printf("\n사각형의 면적을 구합니다.");
			// printf("\n너비와 높이를 입력하세요.");
			printf("\nCalculating area of rectangle.");
			printf(" Enter width and height. >> ");

			scanf("%f %f", &width, &height);

			if (width < 0 || height < 0) {
				// printf("오류: 너비와 높이는 음수가 아니어야 합니다.\n");
				printf("Error: Width and height should be non-negative values.\n");
			}
			else {
				break;
			}
		}

		// printf("\n너비: %.2f, 높이: %.2f, 넓이: %.2f\n", width, height, width * height);
		printf("\nWidth: %.2f, Height: %.2f, Area: %.2f\n", width, height, width * height);
		break;
	case 4:
		while (1) {
			// printf("\n원의 면적을 구합니다.");
			// printf("\n반지름을 입력하세요.");
			printf("\nCalculating area of circle.");
			printf(" Enter radius. >> ");

			scanf("%f", &width);

			if (width < 0) {
				// printf("오류: 반지름은 음수가 아니어야 합니다.\n");
				printf("Error: Radius should be non-negative values.\n");
			}
			else {
				break;
			}
		}

		// printf("\n반지름: %.2f, 넓이: %.2f\n", width, width * width * PI);
		printf("\nRadius: %.2f, Area: %.2f\n", width, width * width * PI);
		break;
	}

	return 0;
}