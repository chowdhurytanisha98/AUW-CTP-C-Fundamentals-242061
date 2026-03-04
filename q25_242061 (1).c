#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = get_int("Enter n: ");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
