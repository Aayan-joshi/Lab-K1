//WAP to display the pattern: 2 2 4 6 10 . . . . . up to 10th term

#include "stdio.h"
#include "stdlib.h"

int main() {
  int a=2, i, b=2, c;

  for (i = 0; i < 10; i++) {

    printf("%d \n", a);
    c = a+b;
    a = b;
    b = c;

  }
