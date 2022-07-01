#include <stdio.h>

int main(int argc, char **argv) {
	printf("%d \n", argc);
	printf("%s \n", argv[0]);

	for (int x = 0; x < argc; x++) printf("%2d: %s\n", x + 1, argv[x]);

	return 0;
}
