#include <stdio.h>
#define PI 3.14

float area(float);
float cicumference(float);

int main() {
    float r;

    printf("Enter float value: ");
    scanf("%f", &r);

    printf("Area = %.2f, Circumference = %.2f", area(r), cicumference(r));

    return 0;
}

float area(float r) {
    return PI * r * r;
}

float cicumference(float r) {
    return  2 * PI * r;
}