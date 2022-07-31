#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct testing
{
  int a;
  char name[20];
};

int main()
{
  struct testing t;
  t.a = 10;
  t.name[0] = 'a';
  printf("%d %s\n", t.a, t.name);

  return 0;
}