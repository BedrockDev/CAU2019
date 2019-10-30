#include <stdio.h>
// constants for matrix outputs
// can be dynamic with malloc functions
#define WIDTH 3
#define HEIGHT 3

void printMatrix(int* matrix, int height, int width) {
	for (int i = 0; i < height; i++) {
		printf("| ");
		for (int j = 0; j < width; j++) {
			printf("%d ", *(matrix + i * width + j));
		}
		printf("|\n");
	}
}

void multiplyMatrix(int* m1, int h1, int w1, int* m2, int h2, int w2) {
	int height = h2;
	int width = w1;
	int output[HEIGHT][WIDTH] = { 0 };

	printMatrix(m1, h1, w1);
	printf("\n X\n\n");
	printMatrix(m2, h2, w2);
	printf("\n||\n\n");

	for (int i = 0; i < HEIGHT; i++) {
		printf("| ");
		for (int j = 0; j < WIDTH; j++) {
			int result = 0;
			for (int k = 0; k < w1; k++) {
				int a = *(m1 + (i * w1) + k);
				int b = *(m2 + (k * w2) + j);
				int ps = a * b;
				result += ps;
				//result += (*(m1 + i * w1 + k)) * (*(m2 + k * h2 + j));
			}
			printf("%d ", result);
		}
		printf("|\n");
	}
}

int main() {
	int matrix1[3][2] = { {3,5}, {4,2}, {5,7} };
	int matrix2[2][3] = { {3, 8, 2}, {2, 4, 6} };

	multiplyMatrix(&matrix1, 3, 2, &matrix2, 2, 3);

	return 0;
}