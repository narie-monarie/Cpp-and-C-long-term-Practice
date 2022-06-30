#include <stdio.h>

int main() {
	int a, b, larger;
	printf("Enter value a and b \n");
	scanf("%d %d", &a, &b);
	larger = (a > b) ? a : b;
	printf("%d is larger", larger);
	return 0;
}
