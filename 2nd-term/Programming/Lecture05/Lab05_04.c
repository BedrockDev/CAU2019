#include <stdio.h>

void copyarray(int from[], int to[], int n) {
    for (int i = 0; i < n; i++) {
        to[i] = from[i];
    }
}

void display(int a[], int m) {
    printf("{");
    for (int i = 0; i < m; i++) {
        printf(" %d", a[i]);
    }
    printf(" }\n");
}

int main() {
    int a[] = { 4, 7, 9, 3, 6 };
    int b[] = { 10, 20, 30, 40, 50, 60 };

    display(a, 5);
    display(b, 6);
    
    int m;
    scanf("%d", &m);

    copyarray(a, b, m);
    display(b, 6);

    return 0;
}