#include <cs50.h>
#include <stdio.h>

int main()
{
    float f = get_float("Enter a float: ");

    printf("%.2f\n", f);

    return 0;
}
