// 1번 문제
// 입력받은 n에 대해서 1부터 n까지의 홀수의 합을 구하는 재귀함수 oddsum(int n)
// 합을 구하고 출력하는 프로그램

#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int oddsum(int);

int main() {
    int n;

	while (1) {
		//printf("N까지의 홀수의 합을 구할 N을 입력하세요: ");
		printf("Input N to calculate the sum of odd numbers smaller than N: ");
		int result = scanf("%d", &n);

		if (result != 1) {
			while (getchar() != '\n'); // clear input buffer
        }
		else if (n > 0) {
			break;
        }
		else {
			//printf("오류: 입력은 자연수여야 합니다.\n");
		    printf("Error: Input number should be a natural number.\n");
        }
	};

    //printf("%d까지의 홀수의 합 = %d\n", n, oddsum(n));
    printf("Sum of odd numbers smaller than %d = %d\n", n, oddsum(n));
    
    // 창 종료 방지
    getch();
}

int oddsum(int n) {
    if (n == 1) {
        return 1;
    } else if (n < 1) {
        return 0;
    } else {
        if (n % 2 == 1) {
            return n + oddsum(n - 2);
        } else {
            return n - 1 + oddsum(n - 3);
        }
    }
}