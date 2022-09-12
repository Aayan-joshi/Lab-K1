#include <stdio.h>


#define PI 3.1415

int main() {

  double r, volume;
  printf("Program to calculate volume of sphere\n");
  printf("__________________________________________________\n");
  printf("Enter radius of sphere : \n");
  scanf("%lf", &r);

  volume = PI * r*r*r * 4/3;


  printf("Volume of sphere with radius %0.2lf is %lf\n", r, volume );


  return 0;
}
