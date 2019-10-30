// 5번 문제
// 대문자를 소문자로, 소문자는 대문자로, 숫자는 0-9, 1-8, 2-7, ... 변환하는 함수 mymanipulator()
// 기본값과 입력값을 함수를 이용해 변형 결과를 출력하는 프로그램

#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int myisupper(char c);
int myislower(char c);
int myisnumber(char c);

char mytoupper(char c);
char mytolower(char c);
char mirrornumber(char c);

void mymanipulator(char *str);

int main() {
	char s[64] = "";
    char str[] = "abc$%#DEF1368";

    // printf("주어진 문자열: %s\n", str);
    printf("Given string:       %s\n", str);

    mymanipulator(str);

    // printf("변경된 문자열: %s\n\n", str);
    printf("Manipulated string: %s\n\n", str);

	//printf("문자열 입력: ");
	printf("Input string:       ");
    gets(s);

    mymanipulator(s);

    // printf("변경된 문자열: %s\n\n");
    printf("Manipulated string: %s\n\n", s);
    
    // 창 종료 방지
    getch();
}

void mymanipulator(char *str) {
    char* result[50];
    int count = 0;

    while (1) {
        char current = *(str + count);

        if (current == '\0') {
            break;
        }

        if (myisupper(current)) {
            *(str + count) = mytolower(current);
        } else if (myislower(current)) {
            *(str + count) = mytoupper(current);
        } else if (myisnumber(current)) {
            *(str + count) = mirrornumber(current);
        }

        ++count;
    }
}

int myisupper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int myislower(char c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int myisnumber(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

char mytoupper(char c) {
    return c + 'A' - 'a';
}

char mytolower(char c) {
    return c + 'a' - 'A';
}

char mirrornumber(char c) {
    switch (c) {
    case '0': return '9';
    case '1': return '8';
    case '2': return '7';
    case '3': return '6';
    case '4': return '5';
    case '5': return '4';
    case '6': return '3';
    case '7': return '2';
    case '8': return '1';
    case '9': return '0';
    }
}
