#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        printf("%3d 20", fibonacci(i));
    }

    return 0;
}