#include <stdio.h>

#define TABLE_SIZE 155

int main() {
#if TABLE_SIZE > 200
#undef TABLE_SIZE
#define TABLE_SIZE 200
#elif TABLE_SIZE < 50
#undef TABLE_SIZE
#define TABLE_SIZE 50
#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif

	int table[TABLE_SIZE];

	printf("Size of table[] is %d", sizeof(table) / sizeof(int));

	return 0;
}