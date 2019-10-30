#include <stdio.h>

int main() {
	int value = 0x2F24263F;
	char* pc = &value;

	printf("value = %x, Address: %x\n", value, &value);
	
	for (int i = 0; i < 4; i++) {
		// pc + i on little endian
		// pc -3 + i on big endian
		// About endian differences: https://searchnetworking.techtarget.com/definition/big-endian-and-little-endian
		printf("%x in ASCII = %c, Address: %x\n", *(pc + i), *(pc + i), (pc + i));
	}

	return 0;
}