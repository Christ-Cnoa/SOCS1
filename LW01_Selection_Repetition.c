#include <stdio.h>

int main(){
  //Three Elevator
  int x, y, k, i;
  scanf ("%d %d %d", &x, &y, &k); getchar();
  for (i= 1;i<100; ) {
    x++;
    y--;
    if (x==y && y==k) {
      printf ("1\n");
      break;
      else if (x>y) {
        printf ("-1\n");
        break;
    }
  }




  return 0;
}