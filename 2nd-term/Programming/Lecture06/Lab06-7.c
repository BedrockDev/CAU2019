#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char s[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	char dest[20] = "";
	printf("printf(s): %s\n\n", s);

	printf("strlwr(s): %s\n", strlwr(s));
	printf("strlen(s): %d\n", strlen(s));
	printf("strpbrk(s, \"idm\"): %p\n", strpbrk(s, "idm"));
	printf("strstr(s, \"eliet\"): %p\n", strlwr(s, "eliet"));
	printf("strchr(s, 'i'): %p\n", strchr(s, 'i'));
	memcpy(dest, s, 10);
	printf("printf(\"%%s\", memcpy(s, dest, 10)): %s\n", dest);

	return 0;
}