#include "stdio.h"
#include "stdlib.h"


int main() {

  char sting[0][1][2];


  printf("Enter a word\n");
  scanf("%s%s%s", sting[0], sting[1], sting[2]);


  printf("%s is the word\n", sting[0]);
  printf("%s is the word\n", sting[1]);
  printf("%s is the word\n", sting[2]);

  return 0;
}
