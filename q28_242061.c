#include <cs50.h>
#include <stdio.h>

int main()
{
    int num = get_int("Enter a number: ");

    if (num >= 1 && num <= 100)
    {
        printf("Number is in the range\n");
    }
    else
    {
        printf("Number is out of range\n");
    }

    return 0;
}
