#include <stdio.h>
int main()
{
    int result;

    printf("\nEnter your marks between 0 to 100:");
    scanf("%d", &result);

    if (result >= 90)
    {
        printf("your grade is A++");
    }

    else if (result >= 80)
    {
        printf("your grade is A");
    }

    else if(result >= 70){
        printf("your grade is B");
    }

    else if (result >= 60){
        printf("your grade is C");
    }

    else{
        printf("you failed");
    }
    return 0;
}
