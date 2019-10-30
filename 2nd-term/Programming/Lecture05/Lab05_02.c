#include <stdio.h>
#define SIZE 5

int main() {
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    int *pary[SIZE] = {&a, &b, &c, &d, &e};
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        sum += *pary[i];
    }

    printf("sum = %d", sum);

    return 0;
}