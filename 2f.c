//WAP to diaplay pattern : 3 9 27 . . . . . 10th term

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main() {
  int a = 3, i;

  for (i = 1; i<11; i++)
  {
     a = pow(3,i);
     printf("%d ", a);
  }
  return 0;
}
