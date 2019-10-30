#include <stdio.h>
#define ROWS 3
#define COLS 2

typedef int scalar;
typedef scalar matrix1[ROWS][COLS];
typedef scalar matrix2[COLS][ROWS];
typedef scalar result[ROWS][ROWS];

void multiply(result r, matrix1 a, matrix2 b);  
void display(result r);

int main() {
	matrix1 a = { {3,5}, {4,2}, {5,7} };
	matrix2 b = { {3, 8, 2}, {2, 4, 6} };
	result r;

	multiply(r, a, b);
	display(r);

	return 0;
}

void multiply(result r, matrix1 a, matrix2 b) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < ROWS; j++) {
			r[i][j] = 0;
			for (int k = 0; k < COLS; k++) {
				r[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

void display(result r) {
	for (int i = 0; i < ROWS; i++) {
		printf("| ");
		for (int j = 0; j < ROWS; j++) {
			printf("%d ", r[i][j]);
		}
		printf("|\n");
	}
}