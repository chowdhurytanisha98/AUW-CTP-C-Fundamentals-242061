#include <cs50.h>
#include <stdio.h>

int main()
{
    float temp = get_float("Enter the temperature: ");

    if (temp < 20)
    {
        printf("Cold\n");
    }
    else if (temp >= 20 && temp <= 30)
    {
        printf("Warm\n");
    }
    else 
    {
        printf("Hot\n");
    }

    return 0;
}
