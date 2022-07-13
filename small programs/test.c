// program to reverse an integer and find its sum

#include<stdio.h>

void main( )
{

 int num,sum=0,rev=0,d;
 printf("Enter the number: ");
 scanf("%d",&num);

while(num){
  d=num%10;
  num=num/10;
  sum=sum+d;
  rev=rev*10+d;
}

printf("\nReverse of the number = %d",rev);
printf("Sum of digits = %d",sum);

}