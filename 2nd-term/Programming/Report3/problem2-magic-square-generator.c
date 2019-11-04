/*
 * 2번 분제
 * 입력받은 홀수 n에 대한 n x n 마방진을 생성하고 출력하는 프로그램
*/

int inc_x(int *x, int size)
{
    if (*x == size - 1)
        *x = 0;
    else
        ++(*x);
    
    return *x;
}

int incd_x(int x, int size)
{
    if (x == size - 1)
        return x = 0;
    else
        return ++x;
}

int dec_y(int *y, int size)
{
    if (*y == 0)
        *y = size - 1;
    else
        --(*y);
    
    return *y;
}

int decd_y(int y, int size)
{
    if (y == 0)
        return y = size - 1;
    else
        return --y;
}

void print_square(int *s, int size) {
    int sum;
    for (int i = 0; i < size; i++) {
        sum = 0;
        for (int j = 0; j < size; j++) {
            sum += *(s + i * size + j);
            printf("%4d  ", *(s + i * size + j));
        }
        printf("| %-4d\n", sum);
    }
    for (int j = 0; j < size; j++) {
        printf("______", sum);
    }
    printf("|\n");
    for (int j = 0; j < size; j++) {
        printf("%4d  ", sum);
    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *square;
    int size;

    while (1)
    {
        //printf("마방진의 크기를 입력하세요: ");
        printf("Enter magic square's size: ");
        int r = scanf("%d", &size);
        if (r != 1)
            while (getchar() != '\n')
                ;
        else if (size % 2 == 1)
            break;
        else
            //printf("오류: 입력은 홀수여야 합니다.\n");
            printf("Error: Input number should be an odd number.\n");
    }

    // Allocates memory to variable square initialized with 0
    square = (int *)calloc(size * size, sizeof(int));
    if (square == NULL)
        exit(1); // null pointer exception

    int count = 0;
    int x = size / 2, y = 0;

    while (count++ < size * size)
    {
        *(square + size * y + x) = count; // Assignes value to the square

        if (*(square + size * decd_y(y, size) + incd_x(x, size)) != 0)
        {
            inc_x(&y, size);
        }
        else
        {
            inc_x(&x, size);
            dec_y(&y, size);
        }
    }

    print_square(square, size);

    return 0;
}