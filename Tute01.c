/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;
   printf("Enter the Mark 1: ");
   scanf("%d",&mark1);
   printf("Enter the Mark 2: ");
   scanf("%d",&mark2);
   
   average=(mark1+mark2)/2;
      
   printf("Average is "%d"",average);
   
  
  return 0;
}

