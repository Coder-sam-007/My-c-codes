#include <stdio.h>
int main()
{
    int suspect, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &suspect);

    for (int i = 2; i * i < suspect; i++)
    {
        if (suspect % i == 0)
        {
            isPrime = 0;
        }

        if (isPrime)
        {
            printf("the number %d is a prime number.\n", suspect);
        }
        else
        {
            printf("the number %d is not a prime number.\n", suspect);
        }
    }
    return 0;
}