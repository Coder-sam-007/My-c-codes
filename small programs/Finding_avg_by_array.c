#include <stdio.h>

int main()
{

    int marks[5], sum = 0, average;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the mark of student-%d ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }

    printf("The average mark of the class is:%d", sum / 5);

    return 0;
}