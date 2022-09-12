#include "stdio.h"
#include "stdlib.h"

int main() {

  double cp, sp, res, res_per;

  printf("program to calculate profit loss amount when selling price and cost is given\n");
  printf("______________________________________________________________________________\n\n\n");


  printf(" Enter cost price : \n");
  scanf("%lf", &cp);
  printf("Enter Selling price : \n");
  scanf("%lf", &sp);

  res = sp -cp;
  if (res > 0) {
    res_per = res/cp * 100;
    printf("There is profit of Rs. %0.1lf at %0.1lf %c \n", res, res_per, 37);
  } else {
    res = abs(res);
    res_per = res/cp * 100;
    printf("There is loss of Rs. %0.1lf at %0.1lf %c \n", res, res_per , 37);
  }

  return 0;
}
