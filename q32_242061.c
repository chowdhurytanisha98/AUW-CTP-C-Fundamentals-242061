#include <cs50.h>
#include <stdio.h>

int main()
{
    int age = get_int("Enter your age: ");

    if (age < 0)
    {
        printf("Invalid Age\n");
    }
    else if (age <= 12)
    {
        printf("Child\n");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teen\n");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("Adult\n");
    }
    else 
    {
        printf("Senior\n");
    }

    return 0;
}
