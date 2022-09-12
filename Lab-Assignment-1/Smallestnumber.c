#include <stdio.h>

int main() {

  int a, b, c;

  printf("Program to find smallest number among given inputs\n");
  printf("_______________________________________________________\n");

  printf("Enter three numbers: \n");
  scanf("%d%d%d", &a, &b, &c);

  if (a<b&&a<c) {
    printf("%d is the smallest number\n", a);
  }
  else if (b<a&&b<c) {
    printf("%d is the smallest number\n", b);
  }
  else if (c<a&&c<b) {
    printf("%d is the smallest number\n", c);
  }
  else{
    printf("All the given numbers are equal \n");
  }

  return 0;
}
