#include <stdio.h>
#define SIZE 3

int main() {
    int a[][SIZE] = {1,2,3,4,5,6,7,8,9};
    int *pary[SIZE];
    
    pary[0] = a[0];
    pary[1] = a[1];
    pary[2] = a[2];

    printf("2nd row + diagonal = %d", 
    *pary[1] + *(pary[1] + 1) + *(pary[1] + 2) +
    *pary[0] + *(pary[1] + 1) + *(pary[2] + 2));

    return 0;
}