#include <stdio.h>

int main(){
  //Three Elevator
  int x, y, k, i;
  scanf ("%d %d %d", &x, &y, &k); getchar();
  for (i = y ; i == 1; i--) {

    if (x >= 0 && y >= 0 && k >= 0 && x <= 100 && y <= 100 && k <= 100) {
      if (x==y && y==k ) {
        printf ("1\n");
        break;
      } else if (x>y) {
      printf ("-1\n");
      break; }
      else{
        x++;
        y--;
      }
    }
    else {
      printf ("-1\n");
      break;
    }
  }
  return 0;
}