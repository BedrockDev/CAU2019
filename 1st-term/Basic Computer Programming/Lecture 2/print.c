#include <stdio.h>

int num1 = 10;

extern void printNumber() {
	printf("%d\n", num1);
}