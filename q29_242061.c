#include <cs50.h>
#include <stdio.h>

int main()
{
    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    if (a > b)
    {
        printf("%d is largest\n", a);
    }
    else if (b > a)
    {
        printf("%d is largest\n", b);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}
