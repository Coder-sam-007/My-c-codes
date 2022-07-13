#include <stdio.h>
#include <string.h>
int main()
{
  char a[20] = "Program";
  char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

  // using the %zu format specifier to print size_t
  printf("Length of string a = %zu \n", strlen(a));
  printf("Length of string b = %zu \n", strlen(b));

  char str1[20] = "programming";
  char str2[30] = "C";

  // copying str1 to str2
  strcpy(str2, str1);

  puts(str2); // similar to printf()

  char str3[100] = "This is ", str4[100] = "The Zain";

  // concatenates str1 and str2
  // the resultant string is stored in str1.

  strcat(str3, str4);
  puts(str3);

  // strncpy
  strncpy(str3, str4, 5);
  puts(str3);

  // strcmp

 char str5[] = "abcd", str6[] = "abCd", str7[] = "abcd";
  int result;

  // comparing strings str5 and str6
  result = strcmp(str5, str6);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str5 and str7
  result = strcmp(str5, str7);
  printf("strcmp(str1, str3) = %d\n", result);

  return 0;
}