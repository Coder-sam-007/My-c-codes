#include <stdio.h>

int main (){
  int num1,num2,container;

  printf("\nEnter a digit:");
  scanf("%d",&num1);

  printf("\nEnter another digit:");
  scanf("%d",&num2);

  container= num1;
  num1= num2;
  num2= container;

  printf("\nafter swapping, \n the first number becomes:%d\n and the 2nd number becomes:%d",num1,num2);
}