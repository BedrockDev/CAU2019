#include <stdio.h>

void hex(int n) {
    if (n > 15) {
        hex(n / 16);
    }
    if (n % 16 > 9) {
        printf("%c", 'A' + (n % 16) - 10);
    } else {
        printf("%d", n % 16);
    }
}

int main() {
    int a;
    scanf("%d", &a);
    
    hex(a);

    return 0;
}