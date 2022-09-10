#include <stdio.h>

int main() {
  float num1, num2, num3;
  float average;
  printf("Program to display average of three numbers\n");
  printf("__________________________________________________\n");

  printf("Enter three numbers: \n");
  scanf("%f%f%f", &num1, &num2, &num3);

  average = (num1 + num2 + num3)/3;

  printf("The average of %0.1f, %0.1f and %0.1f is %0.1f\n", num1, num2, num3, average );


  return 0;
}
