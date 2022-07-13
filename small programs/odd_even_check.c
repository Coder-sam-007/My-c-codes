#include <stdio.h>

int main()
{
int num1;

    printf("\nEnter a digit:");
    scanf("%d",&num1);

    if(num1%2==0){
        printf("The digit you have enterd is even");
    }
    else{
        printf("the digit you have entered is odd");
    }
    return 0;
}
