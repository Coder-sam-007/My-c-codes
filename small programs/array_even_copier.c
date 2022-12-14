#include <stdio.h>
int main()
{

  int limit;
  printf("Enter No. of elements: ");
  scanf("%d", &limit);

  int arr[limit];

  for (int i = 0; i < limit; i++)
  {
    printf("Enter %d element: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int arr2[limit], j = 0;

  for (int i = 0; i < limit; i++)
  {
    if (arr[i] % 2 == 0)
    {
      arr2[j] = arr[i];
      j++;
    }
  }

  for (int i = 0; i < j; i++)
  {
    printf("%d ", arr2[i]);
  }

  return 0;
}