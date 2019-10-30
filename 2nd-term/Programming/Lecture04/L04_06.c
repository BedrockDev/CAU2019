#include <stdio.h>

float simpleRate(int, int, float);
float compoundRate(int, int, float);

int main() {
    int original, year;
    float rate;

    printf("Enter depositing amount: ");
    scanf("%d", &original);

    printf("Enter depositing duration (year): ");
    scanf("%d", &year);

    printf("Enter interest rate: ");
    scanf("%f", &rate);
    
    if (rate > 1) rate -= 1;

    printf("Simple rate for %d, %d year(s) = %.2f\n", 
            original, year, simpleRate(original, year, rate));
    printf("Compound rate for %d, %d year(s) = %.2f\n", 
            original, year, compoundRate(original, year, rate));

    return 0;
}

float simpleRate(int original, int year, float rate) {
    return original * (1 + rate * year);
}

float compoundRate(int original, int year, float rate) {
    float result = original;

    for (int i = 0; i < year; i++) {
        result *= 1 + rate;
    }

    return result;
}