#include <stdio.h>

int square(int);
int cube(int);

int main() {
    int n;

    printf("Enter integer: ");
    scanf("%d", &n);

    printf("%d ^ 5 = %d", n, square(n) * cube(n));

    return 0;
}

int square(int n) {
    return n * n;
}

int cube(int n) {
    return square(n) * n;
}