#include <cs50.h>
#include <stdio.h>

int max(int a, int b);

int main()
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");

    int big = max(x, y);
    printf("Largest = %d\n", big);
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
