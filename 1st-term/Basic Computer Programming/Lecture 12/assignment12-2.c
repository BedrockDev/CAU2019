#include <stdio.h>
#include <stdlib.h>

struct person {
	int age;
	float weight;
	char name[30];
};

int main() {
	struct person *ptr;
	int i, noOfRecords;

	printf("Enter number of persons: ");
	scanf("%d", &noOfRecords);
	ptr = (struct person*) malloc(noOfRecords * sizeof(struct person));

	for (i = 0; i < noOfRecords; ++i) {
		printf("Enter name and age respectively:\n");
		scanf("%s %d", &(ptr + i)->name, &(ptr + i)->age);
	}

	for (i = 0; i < noOfRecords; ++i)
		//printf("Pointer %d\t%d\n", ptr + i, ptr[i]);
		printf("Name: %s\t Age: %d\n", (ptr + i)->name, (ptr + i)->age);

	free(ptr);

	return 0;
}