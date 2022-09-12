//WAP to display the multiplication table of given numbers

#include "stdio.h"

int main() {
  int a, i, b;

  printf("Enter a number: \n");
  scanf("%d", &a);

  for (i = 0; i < 11; i++) {
    b = a*i;
    printf("%d x %d = %d\n", a, i, b);
  }
  return 0;
}
