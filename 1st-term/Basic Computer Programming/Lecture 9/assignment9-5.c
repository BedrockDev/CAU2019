#include <stdio.h>

int main() {
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	for (int i = 0; i < 3; i++) {
		printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
	}		 

	return 0;
}