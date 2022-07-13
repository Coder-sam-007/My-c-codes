#include <stdio.h>
int main(){

int marks[5],i;

char subject[5][10] ={"Maths","Science","English","SST","Hindi"};

for ( i = 0; i < 5; i++)
{
    printf("Enter your marks in %s: ",subject[i]);
    scanf("%d",&marks[i]);
}

for ( i = 0; i < 5; i++)
{
    printf("Your marks in %s is %d \n",subject[i],marks[i]);

}

    return 0;
}