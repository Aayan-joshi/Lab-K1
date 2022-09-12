/*WAP to display the sum, product, difference of any two numbers given by the user.
The program should display sum if user enters 1, product if user enters 2 and difference is
user enters 3 by using switch Case statement. */

#include "stdio.h"
#include "stdlib.h"

//Funtion Declaration
void Addition();
void Subtraction();
void Product();

int main() {

  int operand;

  printf("Simple calculator . exe\n");
  printf("__________________________________________________\n");

  //Asking for type of result
  printf("Enter 0 to exit\n");
  printf("Enter 1 for addition\n");
  printf("Enter 2 for product\n");
  printf("Enter 3 for subtraction\n");


  while(1){
    printf("\nEnter the operand: ");
    scanf("%d", &operand);

        switch (operand) {

          case 0:
          exit(0);
          break;

          case 1:
          Addition();
          break;

          case 2:
          Product();
          break;

          case 3:
          Subtraction();
          break;

          default:
          printf("Invalid Input\n");
          break;
      }
    }
  return 0;
}


void Addition(){
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d \n", a, b, a+b);
}


void Product(){
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d x %d = %d", a, b, a*b);
}

void Subtraction(){
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d - %d = %d", a, b, a-b);
}
