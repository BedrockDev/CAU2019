// 4번 문제
// 2차원 배열와 flag 매개변수를 이용해 다른 연산의 합을 수행하는 함수 arysum()
// 함수와 매개변수를 이용해 배열 연산 결과를 출력하는 프로그램

#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3

int arysum(int (*pary)[SIZE], int rsize, int csize, int flag);

int main() {
	int n;

	while (1) {
		//printf("계산 방식을 입력하세요: ");
		printf("Input calculation type: ");
		int result = scanf("%d", &n);

		if (result != 1) {
			while (getchar() != '\n'); // clear input buffer
		}
		else if (n <= 3 && n >= 0) {
			break;
		}
		else {
			//printf("오류: 입력은 0-3 사이의 정수여야 합니다.\n");
		    printf("Error: Input number should be a integer between 0-3.\n");
		}
	};

	int a[][SIZE] = { 
		{1,2,3}, 
		{4,6,8}, 
		{9,11,13} 
	};
	
	printf("Result of calculation type %d = %d", n, arysum(a, 3, 3, n));
    
    // 창 종료 방지
    getch();
}

int arysum(int (*pary)[SIZE], int rsize, int csize, int flag) {
	switch (flag) {
	case 0:
		return pary[0][0] + pary[1][1] + pary[2][2];
	case 1:
		return pary[2][0] + pary[1][1] + pary[0][2];
	case 2:
		return pary[1][0] + pary[1][1] + pary[1][2];
	case 3:
		return pary[0][1] + pary[1][1] + pary[2][1];
	}
}