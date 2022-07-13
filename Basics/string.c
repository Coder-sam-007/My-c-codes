#include <stdio.h>
int main()
{
    char name[30];
    char str[100] = "\nWelcome to the world of strings\n";
    printf("%s",str);
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // read string
    printf("Name: ");
    puts(name); // display string

	char define[100];
    printf("write a quote:");
	scanf("%[^\n]s", define);
	printf("u wrote this shit.. : %s", define);

    return 0;
}