#include <stdio.h>
int addNumbers(int a, int b);         // function prototype

int area(int r){                       // prototype + defination
    return 3.14*r*r;
}

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d\n",sum);

    printf("Area of the circle is %d",area(n1));
    

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}
