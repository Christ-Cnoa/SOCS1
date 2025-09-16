#include<stdio.h>

int main() {
// A Task. Print Hello World!
//  printf("Hello World!\n");

// B Task. Congratulate user
  char name[120];
  scanf("%[^\n]", name);
  printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);

  return 0;
}