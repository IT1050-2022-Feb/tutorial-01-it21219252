/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance, amount = 0; // declaring variables

  printf("Enter the distance travelled : ");//prompting the user
  scanf ("%f", &distance );// scanning the input

  if (distance > 30.00 ) { // case of distance > 30
    amount = 30.00 * 50.00 + (distance - 30.00) * 40.00;// calculating the amount
  }
  else if ( distance <= 30.00 && distance > 0 ) { // case of distance <= 30
    amount = distance * 50.00; // calculating the amount
  }
  else { // case of invalid input
    printf("Invalid input.. Please try again\n"); // displaying an error message
  }

  printf( "Total amount to be paid : %.2f\n", amount );// printing the total amount
  
  return 0;
}
