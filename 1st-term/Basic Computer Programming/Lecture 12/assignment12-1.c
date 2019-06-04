#include <stdio.h>

struct student {
	char name[50];
	int ID;
	float marks;
};

int main() {
	struct student s;

	printf("Enter information:\n");
	printf("Enter name: ");
	scanf("%s", &s.name);
	printf("Enter ID: ");
	scanf("%d", &s.ID);
	printf("Enter marks: ");
	scanf("%f", &s.marks);

	printf("Displaying Information:\n");
	printf("Name: %s\n", s.name);
	printf("ID: %d\n", s.ID);
	printf("Marks: %f\n", s.marks);

	return 0;
}