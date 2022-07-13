    //*****  Relational Operators *****/
 
// -- it returns the value as 1 (if the conditon is true)
// -- it returns the value as 0 (if the condtion is false) 

#include <stdio.h>

int main()
{


    int num1=10,num2=5;

    printf("%d == %d is %d \n",num1,num2,num1==num2);
    printf("%d != %d is %d \n",num1,num2,num1!=num2);
    printf("%d > %d is %d \n",num1,num2,num1>num2);
    printf("%d < %d is %d \n",num1,num2,num1<num2);
    printf("%d <= %d is %d \n",num1,num2,num1<=num2);
    printf("%d >= %d is %d \n",num1,num2,num1>=num2);


    //***** Logical Operators *****/

    int result;

    result = (num1 == num2) && (num1 > num2);
    

    if (result=1)
    {
        printf("(num1 == num2) && (num1 > num2) is true");
    }
    else
    {
       printf("(num1 == num2) && (num1 > num2) is false");
    }
    

    result = (num1 == num2) || (num1 < num2);
    printf("\n(num1 == num2) || (num1 < num2) is %d \n",result);

    result = !(num1 == num2);
    printf("\n!(num1 == num2) is %d \n",result);

    result = !(num1 != num2);
    printf("\n!(num1 != num2) is %d \n",result);

    
    return 0;
}
