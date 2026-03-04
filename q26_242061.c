#include <cs50.h>
#include <stdio.h>

int main()
{
    int num = get_int("Enter a number: ");

    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;
}
