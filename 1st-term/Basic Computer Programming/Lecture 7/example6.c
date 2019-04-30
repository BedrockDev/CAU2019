#include<stdio.h>

float square(float x) {
	float p;
	p = x * x;
	return (p);
}

int main() {
	float m, n;

	printf("Enter some number for finding square \n");
	scanf("%f", &m);

	n = square(m);
	printf("Square of the given number %f is %f\n", m, n);

	return 0;
}