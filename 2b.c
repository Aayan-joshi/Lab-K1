//WAP to display: 1 4 9 16 . . . . . up to 10th term

#include "stdio.h"
#include "stdlib.h"

int main() {
  int a=2, i;

  for (i = 1; i < 11; i++) {
    a = i*i;
    printf("%d \n", a);

  }
  return 0;
}
