#include <stdio.h>
#define YEARS_OLD 20
#undef YEARS_OLD

int main() {
#ifdef YEARS_OLD
	printf("Computer Programming is over %d years old.\n", YEARS_OLD);
#endif

	return 0;
}