//WAP to display:  100 97 94 91 . . . . . up to 10th term

#include "stdio.h"
#include "stdlib.h"

int main() {
  int a=100, i;

  for (i = 0; i < 10; i++) {
    printf("%d \n", a);
    a=a-3;

  }
  return 0;
}
