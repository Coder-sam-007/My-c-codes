#include <stdio.h>
int main()
{
    int input;

    printf("\nConverting numbers to days\n\n");
    printf("Enter digits from 0 to 6:");
    scanf("%d", &input);

    switch (input)

    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;

    default:
        printf("Invalid");
    }

    return 0;
}