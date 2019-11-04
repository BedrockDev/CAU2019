/*
 * 1번 분제
 * 입력받은 count명에게 각자 7장의 카드를 나눠준 결과를 출력하는 프로그램
 * struct card 를 정의해 배열로 선언하고 사용함
 * 메모리 사용량을 최소화하기 위해 char 타입을 사용하고 결과 배열을 새로 만들지 않고 swap() 을 사용함
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 카트의 총 개수
#define DECK_SIZE 52

typedef struct card card;

struct card
{
    char shape;  // Heart: 0, Diamond: 1, Clover: 2, Spade: 3
    char number; // 1-13 사이의 수
};

// 정렬된 덱을 *deck에 초기화
void create_deck(card *deck)
{
    for (char i = 0; i < 4; i++)
    {
        for (char j = 0; j < 13; j++)
        {
            card c = {i, j + 1};
            deck[i * 13 + j] = c;
        }
    }
}

// 덱 배열에서 index a와 index b의 카드를 swap
void swap(card *c, char a, char b)
{
    card t = c[a];
    c[a] = c[b];
    c[b] = t;
}

// 0-3 사이의 수를 특수문자로 return
char get_symbol(char i)
{
    switch (i)
    {
    case 0:
        return '♥'; // Heart
    case 1:
        return '◆'; // Diamond
    case 2:
        return '♣'; // Clover
    case 3:
        return '♠'; // Spade
    }
}

// 0-3 사이의 수를 문자열로 return
char *get_name(char i)
{
    switch (i)
    {
    case 0:
        return "(Heart)";
    case 1:
        return "(Diamond)";
    case 2:
        return "(Clover)";
    case 3:
        return "(Spade)";
    }
}

// 덱을 인원수 만큼 정렬해서 출력
void print_people(card *c, int count)
{
    for (int j = 0; j < count; j++)
    {
        // printf("      사람 %d        ", j + 1);
        printf("    Person %d        ", j + 1);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("\n");
        for (int j = 0; j < count; j++)
        {
            printf("%2d of %c %-9s   ",
                   c[j * 7 + i].number,             // 카드 번호
                   get_symbol(c[j * 7 + i].shape),  // 카드 모양 특수문자
                   get_name(c[j * 7 + i].shape));   // 카드 모양 문자열
        }
    }
}

int main(void)
{
    card deck[DECK_SIZE];
    create_deck(deck);

    int count;

    while (1)
    {
		//printf("인원수를 입력하세요: ");
        printf("Enter person count: ");
        int r = scanf("%d", &count);
        if (r != 1)
            while (getchar() != '\n');
        else if (count > 0 && count < 8)
            break;
        else
			//printf("오류: 입력은 1-7 사이의 자연수여야 합니다.\n");
            printf("Error: Input number should be a natural number between 1 and 7.\n");
    }

    // 난수 seed 초기화
    srand(time(0));

    for (int i = 0; i < count * 7; i++)
    {
        int random = rand() % (DECK_SIZE - i); // 무작위로 swap할 index 지정
        swap(deck, i, random); // index i를 i 보다 큰 index와 swap
    }

    print_people(deck, count);

    return 0;
}