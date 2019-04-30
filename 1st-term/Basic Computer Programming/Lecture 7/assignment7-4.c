#include <stdio.h>

#pragma warning(disable : 4996)

int AddToTotal(int num){
	static int total = 0;
	total += num;
	return total;
}

int main(void) {
	int num, i;

	for (i = 0; i < 3; i++) {
		printf("enter %d:", i + 1);
		scanf("%d", &num);
		printf("total: %d\n", AddToTotal(num));
	}

	getch();

	return 0;
}