#include <stdio.h>

int intpow(int, int);

int main() {
    int m, n;

    printf("Enter 2 integers m, n: ");
    scanf("%d %d", &m, &n);

    printf("%d ^ %d = %d\n\n", m, n, intpow(m, n));

    return 0;
}

int intpow(int m, int n) {
    if (n == 0) {
        return 1;
    }

    if (m == 0) {
        return 0;
    }
    else {
        if (n < 0) {
            int result = m;
            for (int i = 1; i > n; i--) {
                result /= m;
            }
            return result;
        }
        else {
            int result = m;
            for (int i = 0; i < n; i++) {
                result *= m;
            }
            return result;
        }
    }
}