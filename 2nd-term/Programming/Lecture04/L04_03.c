#include <stdio.h>

int max(int, int, int);

int main() {
    int a, b, c;

    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Maximum value: %d", max(a, b, c));

    return 0;
}

int max(int a, int b, int c) {
    int* max = &a;
    if (b > *max) {
        max = &b;
    }
    if (c > *max) {
        max = &c;
    }
    return *max;
}