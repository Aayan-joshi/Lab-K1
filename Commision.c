#include "stdio.h"
#include "stdlib.h"

int main() {

  int Amount, operand;
  float result;

  printf("Program to display commission for given price\n");
  printf("_____________________________________________________\n");

  printf("commission Amount     <=>     Rate\n");
  printf("Rs 5000     <=>     5%c\n",37);
  printf("Rs 5000 - 10000     <=>     10%c\n",37);
  printf("Rs 10000 and Above     <=>     15%c\n",37);

  printf("_____________________________________________________\n");

  printf("Enter the amount: \n");
  scanf("%d", &Amount);


  if (Amount<5000)
  {
    operand=0;
  }
  else if (5000<Amount&&Amount<10000)
  {
    operand=1;
  }
  else if (Amount>10000)
  {
    operand=2;
  }



  switch (operand) {
    case 0:
    result = 0.05 * Amount;
    break;

    case 1:
    result = 0.1 * Amount;
    break;

    case 2:
    result = 0.15 * Amount;
    break;

    default:
    printf("Invalid operator\n");
    return 0;
    break;
  }

  printf("The commission amount is %0.2f\n", result);


  return 0;
}
