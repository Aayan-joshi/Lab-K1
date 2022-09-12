//WAP to display the pattern: 100 81 64 49 . . . . . up to 10th term

#include "stdio.h"

int main() {
  int a=10, i;

  for (i = 0; i < 10; i++) {
    printf("%d\n", a*a);
    a=a-1;

  }
  return 0;
}
