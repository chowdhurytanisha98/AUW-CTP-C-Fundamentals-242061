#include <cs50.h>
#include <stdio.h>

int main()
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");
    int c = get_int("Enter third number: ");

    if (a >= b && a >= c)
    {
        if ((a == b && a == c) || (a == b) || (a == c))
        {
            printf("There is a tie, largest is %d\n", a);
        }
        else
        {
            printf("%d is largest\n", a);
        }
    }
    else if (b >= a && b >= c)
    {
        if (b == c)
        {
            printf("There is a tie, largest is %d\n", b);
        }
        else
        {
            printf("%d is largest\n", b);
        }
    }
    else
    {
        printf("%d is largest\n", c);
    }

    return 0;
}
