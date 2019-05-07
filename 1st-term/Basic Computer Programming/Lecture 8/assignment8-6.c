#include <stdio.h>

int* getLarger(int *a, int *b);
int* getSmaller(int *a, int *b);

int main(void) {
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("The number %d is larger than %d", *getLarger(&a, &b), *getSmaller(&a, &b));
}

int* getLarger(int *a, int *b) {
	if (*a > *b) {
		return a;
	} else {
		return b;
	}
}

int* getSmaller(int *a, int *b) {
	if (*a < *b) {
		return a;
	} else {
		return b;
	}
}