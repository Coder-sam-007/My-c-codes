#include <stdio.h>

int main()

{

  /*  printf("Enter a number: ");
   scanf("%d", &n); */

  int n = 8;

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < i; j++)
    {
      printf("* ");
    }

    printf("\n");
  }

  return 0;
}