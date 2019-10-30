#include <stdio.h>

int sum(int n) {
	static int call = 0;
	printf("sum() is called %d times\n", ++call);

	if (n > 1) {
		return n + sum(n - 1);
	}
	else {
		return n;
	}
}

int main() {
	int n;
	printf("Enter integer n: "); scanf("%d", &n);

	printf("\nSum until %d = %d", n, sum(n));

	return 0;
}