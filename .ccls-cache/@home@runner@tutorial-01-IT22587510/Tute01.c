/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int smark1, smark2, tot;
  float avg;

  printf("Enter subject1 marks :");
  scanf("%d", &smark1);

  printf("Enter subject2 marks :");
  scanf("%d", &smark2);

  tot = smark1 + smark2;
  avg = tot / 2.0;

  printf("Average of two subject marks = %.2f", avg);

  return 0;
}
