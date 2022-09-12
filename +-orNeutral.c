#include "stdio.h"
#include "stdlib.h"

int main() {
  //WAP to check whether the given number is positive, negative or neutral
  float num1;

  printf("Progream to check whether the given number is positive, negative or neutral\n");
  printf("_____________________________________________________________________________\n");

  //INPUT

  printf("Enter a number : \n");
  scanf("%f", &num1);

  if (num1>0)
  {
    printf("%0.1f is positive\n", num1);
  }
  else if(num1==0)
  {
    printf("%0.1f is neutral\n", num1);
  }
  else if(num1<0)
  {
    printf("%0.1f is negative\n", num1);
  }


  return 0;
}
