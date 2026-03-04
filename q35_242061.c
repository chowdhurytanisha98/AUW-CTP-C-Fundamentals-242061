#include <cs50.h>
#include <stdio.h>

int main()
{
    int year = get_int("Enter a year: ");

    if (year <= 0)
    {
        printf("Invalid Year\n");
    }
    else if (year % 400 == 0)
    {
        printf("Leap Year\n");
    }
    else if (year % 100 == 0)
    {
        printf("Not Leap Year\n");
    }
    else if (year % 4 == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap Year\n");
    }

    return 0;
}
