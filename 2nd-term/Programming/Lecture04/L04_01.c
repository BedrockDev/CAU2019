#include <stdio.h>

int main() {
    float value;

    printf("Enter value (inch): ");
    scanf("%f", &value);

    printf("%.2f inch = %.2f cm\n\n", value, value * 2.54);

    return 0;
}