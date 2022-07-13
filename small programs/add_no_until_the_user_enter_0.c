// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  float number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%f", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum of your input values are = %.2f",sum);

  return 0;
}