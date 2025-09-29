#include <stdio.h>

int main(){
  // A Task (Addition)
  // int a, b;
  // scanf ("%d + %d =", &a, &b); getchar();
  // scanf ("%d + %d =", &c, &d); getchar();
  // scanf ("%d + %d =", &e, &f); getchar();

  // printf ("%d\n", a+b);
  // printf ("%d\n", c+d);
  // printf ("%d\n", e+f);

    // B Task (Discount)
    int price, discount;
    scanf ("%d %d", &price, &discount); getchar();
    printf ("%d\n", price - (price * discount / 100));
  return 0;
}