#include <stdio.h>

/* Declaration of structure */
struct address
{
    int houseno;
    char street[20];
    int stateno;
};

/* Declaration of structure */
struct student
{
    char name[30];
    int roll;
    struct address adrs; /* Nested structure */
};

int main()
{
    struct student stud;

    printf("Enter name and roll number of student:\n");
    scanf("%s%d", stud.name, &stud.roll);
    printf("Enter street name, house number and state number:\n");
    scanf("%s%d%d", stud.adrs.street, &stud.adrs.houseno, &stud.adrs.stateno);
    printf("Student detail is:\n");
    printf("Name: %s\tRoll: %d\n", stud.name, stud.roll);
    printf("Address:%s, House no. -%d, state: %d", stud.adrs.street, stud.adrs.houseno, stud.adrs.stateno);

    return 0;
}