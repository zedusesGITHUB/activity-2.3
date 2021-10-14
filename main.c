#include <stdio.h>
#include <conio.h>
int main()
{
   //declaring variables
   int roll_no;
   int percentage;
   char grade;
   //getting input from user
   printf("Enter the following details. \n");
   printf("Roll No: ");
   scanf("%i", &roll_no);
   printf("Grade: ");
   scanf(" %c", &grade);
   printf("Percentage: ");
   scanf(" %i", &percentage);
   //seprating
   printf("________________________ \n");
   printf("\n");
   //outputing results
   printf("Roll No        :     %i \n", roll_no);
   printf("Percentage     :     %i%%\n", percentage);
   printf("Grade          :     %c", grade); 
   return 0;
}

 
