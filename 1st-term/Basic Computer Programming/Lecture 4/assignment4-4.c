#include <stdio.h> 

int main() {
	char op;
	int x, y, result;

	printf("Enter (ex. 2 + 5)\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+') {
		result = x + y;
	} else if (op == '-') {
		result = x - y;
	} else if (op == '*') {
		result = x * y;
	} else if (op == '%') {
		result = x % y;
	} else {
		printf("no operation\n"); 
	}

	printf("%d %c %d = %d\n", x, op, y, result);

	return 0;
}