// 3번 문제
// 입력받은 3자리 10진수 n을 16진수로 표현하는 재귀함수 tohex(int n)
// 재귀함수를 이용해 16진수 표현을 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void tohex(int);

int main() {
	int n;

	while (1) {
		//printf("16진수로 출력할 3자리의 숫자 N을 입력하세요: ");
		printf("Input 3 digit number N to print as hexadecimal: ");
		int result = scanf("%d", &n);

		if (result != 1) {
			while (getchar() != '\n'); // clear input buffer
		}
		else if (n >= 100 && n < 1000) {
			break;
		}
		else {
			//printf("오류: 입력은 3자리 수여야 합니다.\n");
		    printf("Error: Input number should be a 3 digit number.\n");
		}
	};

	//printf("%d 의 16진수 표현 = ", n);
	printf("%d in hexadecimal = ", n);
	tohex(n);
    
    // 창 종료 방지
    getch();
}

void tohex(int n) {
	if (n >= 16) {
		tohex(n / 16);
	}
	if (n % 16 < 10) {
		printf("%d", n % 16);
	}
	else if (n % 16 >= 10 && n % 16 < 16) {
		printf("%c", ((n % 16) - 10) + 'A');
	}
}