#include<stdio.h>
#include<string.h>


struct Person {
	char  name[50];
	int age;
	float height;
};

int main() {
	struct Person student;

	strcpy(student.name, "Sam Choi");
	student.age = 30;
	student.height = 175.5;

	printf("--- User Profile ---\n");
	printf("name:	%s\n", student.name);
	printf("Age:	%d\n", student.age);
	printf("Height:	%.1f cm\n", student.height);

	printf("Size of student: %lu bytes\n", sizeof(student));
	printf("Name length: %lu\n", strlen(student.name));

	return 0;
}
