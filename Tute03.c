/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n, i, total= 0;// decalring and initializing variables

  printf("Enter a integer from the keyboard : " );//prompting the user
  scanf ("%d", &n );//scanning the input

  for( i = 1; i <= n; i++ ) { // for loop to calculate the total
    total = total + i; //calculating the total
  } //end of for loop

  printf("The sum of numbers from 1 to %d : %d\n", n, total );// printing the ouput

  return 0;
}// end of main