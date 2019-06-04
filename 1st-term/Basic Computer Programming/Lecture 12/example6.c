#include <stdio.h>
#include<stdlib.h>

struct course {
	int marks;
	char subject[30];
};

int main() {
	struct course *ptr; 
	int i, noOfRecords;

	printf("Enter number of records: ");
	scanf("%d", &noOfRecords);
	ptr = (struct course*) malloc(noOfRecords * sizeof(struct course));

	for (i = 0; i < noOfRecords; ++i) {
		printf("Enter name of the subject and marks respectively:\n");
		scanf("%s %d", &(ptr + i)->subject, &(ptr + i)->marks);
	}

	for (i = 0; i < noOfRecords; ++i)
		//printf("Pointer %d\t%d\n", ptr + i, ptr[i]);
		printf("%s\t%s\n", (ptr + i)->subject, (*(ptr + i)).subject);

	free(ptr);

	return 0;
}