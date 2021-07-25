/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int marks1,marks2;  //declare variable 
  float tot,avg;
  printf("Enter the mark 01:");
  scanf("%d",&marks1);//input data
  printf("Enter the marks 02:");
  scanf("%d",&marks2);//input data
  tot=marks1+marks2;//calculation
  avg=tot/2;
  printf("Average Marks is %.2f",avg);//output
//end
  return 0;
}

