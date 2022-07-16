#include <stdio.h>
#include <stdlib.h>

int addNumbers(int num1, int num2) { return num1 + num2; }

int main() {
  int numberGrid[2][3] = {{1, 2, 3}, {4, 5, 6}};
  numberGrid[0][1] = 99;
  printf("%d \n", numberGrid[0][0]);
  printf("%d", addNumbers(12, 5));

  int isStudent = 0;
  int isSmart = 0;
  if (isStudent != 0 && isSmart != 0) {
    printf("the student is smart");
  }

  ('a' > 'b') ? printf("its greater") : printf("its Not");

  char myGrade = 'A';

  switch (myGrade) {
  case 'A':
    printf("Yes");
    break;
  default:
    printf("invalid");
  }
  return 0;
}
