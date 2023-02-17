#include "stdio.h"
#include "stdlib.h"

int main() {
  int a, b, c, i;

  printf("Enter a number \n");
  scanf("%d", &a);

  for (a; a >0; a=a/10)
  {
    printf("%d\n", a);
  }

  return 0;
}
