//WAP to find the middle number among three given inputs

#include "stdio.h"
#include "stdlib.h"

int main() {

  int a, b, c;

  printf("Program to find middle number among three given inputs\n");
  printf("______________________________________________________________\n");

  printf("Enter three numbers: \n");
  scanf("%d%d%d", &a, &b, &c);

  if(a<b&&a>c){
    printf("%d is the middle number\n", a);
  }
  else if(a>b&&a<c){
    printf("%d is the middle number\n", a);
  }
  else if(b>a&&b<c){
    printf("%d is the middle number\n", b);
  }
  else if(b<a&&b>c){
    printf("%d is the middle number\n", b);
  }
  else if(c>a&&c<b){
    printf("%d is the middle number\n", c);
  }
  else if(c<a&&c>b){
    printf("%d is the middle number\n", c);
  }
  else{
    printf("All numbers are equal or inpute is incvalid\n");
  }

  return 0;
}
