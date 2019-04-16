#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*

// A failed attempt to make a clock with while loop

char* getTime() {
	time_t now;
	time(&now);
	return ctime(&now);
}

int main() {
	char* now = getTime();
	char* past = getTime();

	while (1) {
		now = getTime();

		printf("Past: %s // Now: %s // strcmp: %d \n", past, now, strcmp(now, past));
		if (strcmp(now, past) != 0) {
			printf("%s\n", now);
		}

		past = now;
	}
}

// need to assign char* variables with strcpy(target, value) function

*/

int main() {
	printf("File: %s\n", __FILE__);
	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("Line: %d\n", __LINE__);
}