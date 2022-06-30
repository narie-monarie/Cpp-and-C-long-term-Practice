#include <stdio.h>

struct Student {
	int age;
	double gpa;
	char grade;
} int main() {
	struct Student student1;
	student1.age = 19;
	student1.gpa = 9.4;
	student1.grade = 'A';

	printf("%d \n", student1.age);
	return 0;
}
