#include <stdlib.h>
#include <stdio.h>

int main() {
	int *ptr;
	ptr = (int*)malloc(15 * sizeof(int)); /* a block of 15 integers */

	if (ptr != NULL) {
		// need to check
		*(ptr + 5) = 480; /* assign 480 to sixth integer */
		//*(ptr + 5) is same as ptr[5] = 480
		printf("Value of the 6th integer is %d", *(ptr + 5));
	}
}