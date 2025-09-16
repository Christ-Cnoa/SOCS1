#include <stdio.h>

int main() {
// A Task. Print Hello World!
//  printf("Hello World!\n");

// B Task. Congratulate user
  // char name[120];
  // scanf("%[^\n]", name);
  // printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);

  // C Task. Greetings
  // char name[120];
  // scanf("%[^\n]", name);
  // printf("Halo %s\n", name);

  // D Task. Hexadecimal conversion
  // int num;
  // scanf("%d", &num);
  // printf("%x\n", num);

  // E Task. Registration
    char Id[15];
    char Name[120];
    char Class;
    int Num;
    scanf("%s", &Id);
    getchar();
    scanf("%[^\n]", Name);
    getchar();
    scanf("%c %d", &Class, &Num);
    getchar();
    printf("Id\t: %s\n", Id);
    printf("Name\t: %s\n", Name);
    printf("Class\t: %c\n", Class);
    printf("Num\t: %d\n", Num);

  return 0;
}