#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
	int numbers[SIZE];
	int x, outer, inner, temp;

	srand((unsigned)time(NULL));
	for (x = 0; x < SIZE; x++) numbers[x] = rand() % 100 + 1;
	:
}
