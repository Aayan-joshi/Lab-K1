#include "stdio.h"
#include "stdlib.h"

int main() {

    char *subject1[10], *subject2[10], *subject3[10];
    float marks1, marks2, marks3;


    printf("To check whether student is pass or fail . . . pass marks = 40\n");
    printf("--------------------------------------------------------------------------\n");

printf("Enter first subject : \n");
scanf("%s", subject1);

printf("Enter marks: \n");
scanf("%f", marks1);

printf("Enter first subject : \n");
scanf("%s", subject2);

printf("Enter marks: \n");
scanf("%f", marks2);

printf("Enter first subject : \n");
scanf("%s", subject3);

printf("Enter marks: \n");
scanf("%f", marks3);

if (marks1>=40&&marks2>=40&&marks3) {
  printf("You have passed you exams\n");
} else {
  printf("you have failed your exams\n", );
}






  return 0;
}
