// write a program to reverse a string

#include <stdio.h>
int main(){

    char temp;
    char s[100];
    int len=0;

    printf("Enter a string: ");
    gets(s);

    while(s[len]!='\0'){
        len++;
    }

    printf("The length of this string is %d\n", len);

    for (int i = 0; i < (len-1)/2; i++)

    {
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }

    printf("The reversed string is %s\n", s);
    return 0;
}