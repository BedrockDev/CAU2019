#include <stdio.h>

int isequalarray(int a[], int b[], int a_size, int b_size) {
    if (a_size != b_size) return 0;

    for (int i = 0; i < a_size; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int a[] = { 4, 7, 9, 3, 6 };
    int b1[] = { 4, 7, 9, 3, 6 };
    int b2[] = { 4, 7, 10, 3, 6 };
    int b3[] = { 4, 7, 9, 3, 6, 7 };

    printf("%d\n", isequalarray(a, b1, 5, 5));
    printf("%d\n", isequalarray(a, b2, 5, 5));
    printf("%d\n", isequalarray(a, b3, 5, 6));

    return 0;
}