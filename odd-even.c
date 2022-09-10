#include "stdio.h"
#include "stdlib.h"

int main() {

  long int num1, num2;

  printf("Calculate if given number is odd or even using switch case\n");
  printf("_____________________________________________________________________\n");

  printf("Enter a number: \n");
  scanf("%ld", &num1);
  num1 = abs(num1);
  num2 = num1 % 2;

  switch (num2) {
    case 1:
    printf("The number is odd\n");
    break;

    case 0:
    printf("The number is even\n");
    break;

    default:
    printf("The number is invalid\n");
    exit(0);
    break;
  }



  return 0;
}
