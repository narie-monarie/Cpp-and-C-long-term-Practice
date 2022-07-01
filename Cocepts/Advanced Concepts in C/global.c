#include <stdio.h>

void displaydata(void);
void manipulatedata(void);

extern int data[5] = {2, 3, 4, 5, 6, 7};

int main() {
	displaydata();
	manipulatedata();
	displaydata();

	return 0;
}
