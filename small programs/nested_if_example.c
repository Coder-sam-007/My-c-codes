#include <stdio.h>

void main()
{

    int num1, num2;

    printf("\nEnter a number:");
    scanf("%d",&num1);

    printf("\nEnter another number:");
    scanf("%d",&num2);

    if (num1 == num2)
    {
        printf("\nboth the digits are same\n");
    }

    else
    {

        printf("\nboth the digits are different\n");
        if (num1 > num2)
            printf("\nyour 1st digit is greater than ur 2nd digit\n");
        else
        {
            printf("\nyour 2nd digit is greater than your 1st digit\n");
        }
    }
}