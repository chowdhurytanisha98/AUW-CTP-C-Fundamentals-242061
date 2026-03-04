#include <cs50.h>
#include <stdio.h>

int main()
{
    int num = get_int("Enter a number: ");

    if (num == 0)
        printf("Zero\n");
    else if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
