#include <stdio.h>

void display(int*, int);
int isequalarray(int*, int*, int, int);

int main() {
	int a[] = { 4, 7, 9, 3, 6 };
	int b1[] = { 4, 7, 9, 3, 6 };
	int b2[] = { 10, 20, 30, 40, 50 };
	int b3[] = { 4, 7, 9, 3, 7 };

	printf("a[]  = "); display(a, sizeof(a)/sizeof(a[0]));

	printf("\nb1[] = "); display(b1, sizeof(b1)/sizeof(b1[0]));
	isequalarray(a, b1, sizeof(a)/sizeof(a[0]), sizeof(b1)/sizeof(b1[0])) ? printf("a[] and b1[] is the same\n") : printf("a[] and b1[] is not the same\n");

	printf("\nb2[] = "); display(b2, sizeof(b2)/sizeof(b2[0]));
	isequalarray(a, b2, sizeof(a)/sizeof(a[0]), sizeof(b2)/sizeof(b2[0])) ? printf("a[] and b2[] is the same\n") : printf("a[] and b2[] is not the same\n");

	printf("\nb3[] = "); display(b3, sizeof(b3)/sizeof(b3[0]));
	isequalarray(a, b3, sizeof(a)/sizeof(a[0]), sizeof(b3)/sizeof(b3[0])) ? printf("a[] and b3[] is the same\n") : printf("a[] and b3[] is not the same\n");

    return 0;
}

int isequalarray(int* a, int* b, int alen, int blen) {
    if (alen != blen) {
        return 0;
    } else {
        for (int i = 0; i < alen; i++) {
            if (*(a + i) != *(b + i)) {
                // array is not a duplicate
                return 0;
            }
        }
        // array is a duplicate
        return 1;
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