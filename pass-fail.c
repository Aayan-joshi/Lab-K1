#include "stdio.h"
#include "stdlib.h"

int main() {

    char *subject1[10], *subject2[10], *subject3[10];
    float marks1, marks2, marks3;

    char *firstName[30], *lastName[30];
    int roll_no, grade;


    printf("To check whether student is pass or fail . . . pass marks = 40\n");
    printf("--------------------------------------------------------------------------\n");


    //ASK NAME
    printf("First Name : ");
    scanf("%s", &firstName);
    printf("First Name : ");
    scanf("%s", &lastName);


    //ASK CLASS
    printf("Enter Grade : ");
    scanf("%d", &grade);


    //ASK ROLL NO
    printf("Enter roll no. : ");
    scanf("%d", &roll_no);

// SUBJECT AND MARKS

printf("\nEnter first subject : \n");
scanf("%s", &subject1);
printf("Enter marks: \n");
scanf("%f", &marks1);
printf("Enter second subject : \n");
scanf("%s", &subject2);
printf("Enter marks: \n");
scanf("%f", &marks2);
printf("Enter third subject : \n");
scanf("%s", &subject3);
printf("Enter marks: \n");
scanf("%f", &marks3);


//OUTPUT

printf("_____________________________________________________________________\n");
printf("Name : %s %s\n", firstName, lastName);
printf("Class : %d\n", grade);
printf("Roll no. : %d\n", roll_no);

printf("_____________________________________________________________________\n");

printf("Subject     <=>     Marks\n");
printf("%s     <=>     %0.0f\n", subject1, marks1);
printf("%s     <=>     %0.0f\n", subject2, marks2);
printf("%s     <=>     %0.0f\n", subject3, marks3);

printf("_____________________________________________________________________\n");


if (marks1>=40&&marks2>=40&&marks3>=40) {
  printf("Mr/Mrs %s %s of class %d and Roll no. %d has passed his/her terminal exams", firstName, lastName, grade, roll_no);
} else {
  printf("Mr/Mrs %s %s of class %d and Roll no. %d has unfortunately failed his/her terminal exams", firstName, lastName, grade, roll_no);
}






  return 0;
}
