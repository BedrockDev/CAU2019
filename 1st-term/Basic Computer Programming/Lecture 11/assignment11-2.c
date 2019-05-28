#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct name {
	int age;
	char name[25];
};

int main() {
	char *org_name;
	struct name *myname;
	int i;

	org_name = (char *)malloc(sizeof(char) * 25);
	myname = (struct name *)malloc(sizeof(myname) * 2);

	strcpy(org_name, "yundream");
	myname[0].age = 25;

	strcpy(myname[0].name, org_name);
	strcpy(org_name, "testname");
	myname[1].age = 28;

	strcpy(myname[1].name, org_name);

	for (i = 0; i < 2; i++) {
		printf("%d : %s\n", myname[i].age, myname[i].name);
	}
}