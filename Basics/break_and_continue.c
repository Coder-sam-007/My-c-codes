#include <stdio.h>

int main()
{

    // break statement
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
        if (i == 3)
            break;
    }

    // continue statement

    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
            continue;
        printf("%d\n", i);
    }

    return 0;
}