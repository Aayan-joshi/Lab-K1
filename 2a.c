//WAP to display: 2 4 8 16 32 . . . up to 10th term

#include "stdio.h"
#include "stdlib.h"

int main() {
  int a=2, i;

  for (i = 0; i < 10; i++) {
    printf("%d \n", a);
    a=a*2;
  }
  return 0;
}
