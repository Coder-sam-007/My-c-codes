#include <stdio.h>

int factorial(int x)
{
    int f;
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        f = x * factorial(x - 1);
    }

    return f;
}

int main()
{
    int x;
    printf("enter a number");
    scanf("%d", &x);
    
    factorial(x);

    return 0;
}