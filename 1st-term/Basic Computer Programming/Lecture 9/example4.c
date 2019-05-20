#include<stdio.h> 

int main() {
	// initializing the 3-dimensional array 
	int x[2][3][4] =
	{
		{ {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },
		{ {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }
	};

	// output each element's value 
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 4; ++k) {
				printf("Element at x[%d], y[%d], z[%d], value: %d\n",
					i, j, k, x[i][j][k]);
			}
		}
	}

	return 0;
}