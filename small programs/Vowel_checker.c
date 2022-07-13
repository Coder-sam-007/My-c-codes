#include <stdio.h>
#include <ctype.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    int lowerCase, upperCase;

    lowerCase = (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u');

    upperCase = (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U');

    if(!isalpha(alphabet)){
    printf("Error! NON ALPHABETIC CHARACTER");}

    else if( lowerCase || upperCase){
        printf("You have enterd a vowel");
    }

    else{
        printf("You have enterd a consonant");
    }

    return 0;
}