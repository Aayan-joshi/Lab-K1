//WAP to display the pattern : 5 10 20 35 . . . . . up to 10th term

#include "stdio.h"

int main() {
  int a=5, b=5, i;

  for (i = 0; i < 10; i++) {

    printf("%d \n", a);
    a = a+b;
    b=b+5;
  }
  return 0;
}
