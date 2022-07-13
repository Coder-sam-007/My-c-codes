#include <stdio.h>
int main()
{

    int num1, i, range;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter range: ");
    scanf("%d", &range);

    if (range > 0)
    {
        for (i = 1; i <= range; i++)
        {
            printf("%d*%d=%d\n", num1, i, num1 * i);
        }
    }
    else
    {
        printf("Invalid range");
    }

    return 0;
}