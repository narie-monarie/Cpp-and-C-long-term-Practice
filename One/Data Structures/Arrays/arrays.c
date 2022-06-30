#include <stdio.h>
#define N 10
int main() {
	int marks[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int numberofElements = sizeof(marks) / sizeof(int);
	for (int i = numberofElements - 1; i >= 0; i--) printf("%d,", marks[i]);
	printf("\n %d", numberofElements);
	return 0;
}
