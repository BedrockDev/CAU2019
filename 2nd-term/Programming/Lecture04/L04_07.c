#include <stdio.h>

void copyarray(int*, int*, int);
void display(int*, int);

int main() {
    int a[] = { 4, 7, 9, 3, 6 };
    int b[] = { 10, 20, 30, 40, 50, 60 };
    int index;

    printf("a[] = "); display(a, sizeof(a)/sizeof(a[0]));
    printf("b[] = "); display(b, sizeof(b)/sizeof(b[0]));

    printf("\nEnter index to copy: ");
    scanf("%d", &index);

    copyarray(a, b, index);

    printf("a[] = "); display(a, sizeof(a)/sizeof(a[0]));
    printf("b[] = "); display(b, sizeof(b)/sizeof(b[0]));

    return 0;
}

void copyarray(int* from, int* to, int index) {
	for (int i = 0; i < index; i++) {
		to[i] = from[i];
	}
}

void display(int* array, int length) {
    printf("{ ");
	for (int i = 0; i < length; i++) {
		if (i == length - 1) {
			printf("%d }\n", array[i]);
		}
		else {
			printf("%d, ", array[i]);
		}
	}
}