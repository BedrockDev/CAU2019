// 2번 문제
// 입력받은 n에 대해서 1번째 부터 n번째 까지의 피보나치 수를 모두 출력하는 재귀함수 fibonacci(int n)
// 재귀함수를 이용해 피보나치 수열을 출력하는 프로그램

#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int fibonacci(int);

int main() {
    int n;

	while (1) {
		//printf("피보나치 수를 구할 숫자 N을 입력하세요: ");
		printf("Input N to print Nth fibonacci number: ");
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

    //printf("1번째 부터 %d번째 까지 피보나치 수를 출력합니다.\n\n", n);
    printf("Printing fibonacci number from 1-%d.\n\n", n);

    for (int i = 0; i <= n; i++) {
        //printf("%2d번째 피보나치 수: %5d\n", i, fibonacci(i));
        printf("Fibonacci number %2d: %5d\n", i, fibonacci(i));
    }
    
    // 창 종료 방지
    getch();
}

int fibonacci(int n) {
    if (n == 1) {
        return 1;
    } else if (n < 1) {
        return 0;
    } else {
        int result = fibonacci(n - 1) + fibonacci(n - 2);
        return result;
    }
}