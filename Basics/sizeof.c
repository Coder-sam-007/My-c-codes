#include <stdio.h>

int main()
{
   printf("\nHeloooo\n");

    short a;
    long b;
    long long c;
    long double d;

    int e;
    float f;

    printf("size of short = %d bytes\n", sizeof(a));
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double= %d bytes\n", sizeof(d));

    printf("size of int = %lu bytes\n", sizeof(e));
    printf("size of float = %lu bytes\n", sizeof(f));

   return 0;
}
