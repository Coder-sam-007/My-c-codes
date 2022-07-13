#include <stdio.h>

int main()
{
    float num1, num2;

    printf("enter two numbers:");
    scanf("%f %f", &num1, &num2);

    printf("the addition of your given inputs are:%f\n", num1 + num2);
    printf("the subtraction of your given inputs are:%f\n", num1 - num2);
    printf("the multiplication of your given inputs are:%f\n", num1 * num2);
    printf("the division of your given inputs are:%f\n", num1 / num2);

    int num3, num4;

    printf("Enter two integer values:");
    scanf("%d %d", &num3, &num4);
    printf("the modulus of ur given digits are:%d", num3 % num4); // modules cant't be stored in floating numbers
    return 0;
}
