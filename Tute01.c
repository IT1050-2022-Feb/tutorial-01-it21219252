/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2, average; // decalring variables

  printf("Input the marks of first subject : ");// prompting the user
  scanf ("%f", &mark1 );// scanning the input

  printf("Input the marks of second subject : ");// prompting the user
  scanf ("%f", &mark2 );// scanning the input

  average = ( mark1 + mark2 ) / 2; // calculating the average

  printf("Average is : %.2f\n", average );//displaying the average
  
  return 0;
}// end of main

