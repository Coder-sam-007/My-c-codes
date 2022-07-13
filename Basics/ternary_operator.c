#include <stdio.h>
int main(){
int num1,num2,result;

printf("Enter the first number: ");
scanf("%d",&num1);

printf("Enter the second number: ");
scanf("%d",&num2);

// condition ? value_if_true : value_if_false

result= (num1>num2) ? num1 : num2;
printf("The greater number is %d",result);

//nested ternary operator

result = (num1 <= 10 ? (num2 >= 10 ? 1 : 0) : 0);

printf("\nThe result is %d",result);

    return 0;
}