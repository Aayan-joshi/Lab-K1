//WAP to print the pattern: 3 33 333 3333 33333

#include "stdio.h"
#include "stdlib.h"

int main() {
  int a=3, i;

  for (i = 0; i < 5; i++) {
    printf("%d ", a);
    a=a*10+3;
  }


  return 0;
}
