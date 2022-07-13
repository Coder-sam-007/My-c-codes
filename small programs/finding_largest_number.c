#include <stdio.h>

int main(){
    int num1,num2,num3;

    printf("enter 3 numbers that u want to compare:");
    scanf("%d%d%d",num1,num2,num3);

    if (num1>= num2 && num1 >= num3)
    {
        printf("the greatest number among the numbers that you have entered is:%d",num1);
    }
    
    else if(num2>=num1 && num2>= num3)
    {
        printf("the greatest number among the numbers that you have entered is:%d",num2);
    }
    
    else
    {
        printf("the greatest number among the numbers that you have entered is:%d",num3);
    }
    


} 