#include <stdio.h>
int main()
{
    int num1 = 0;

    // while loop
    printf("Printing numbers from 1 to 20");

    while (num1 < 20)
    {
        printf("\n %d \n",num1);
        num1++;
    }

    // do while loop

    num1 = 10;

    do
    {
        printf("%d\n",num1);
        num1++;
    } while (num1 < 20);

    //for loop

for(num1=99;num1<=107;num1++){
    printf("\n%d\n",num1);
}

  
//nested loop

int i,j;

printf("this is an example of nested loop");

for(i=0;i<5;i++){
    printf("\n %d",i);

   for(j=0;j<4;j++){
       printf(" %d\n",j);
   }
    
}

  return 0;
}