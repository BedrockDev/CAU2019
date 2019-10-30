#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    int b[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int *p;
    int sum = 0;

    p = a;
    for (int i = 0; i < 4; i++) {
        sum += *(p + i);
    }
    printf("Sum of a = %d", sum);

    sum = 0;
    p = b;
    for (int i = 0; i < 8; i++) {
        sum += *(p + i);
    }
    printf("\nSum of b = %d", sum);

    return 0;
}