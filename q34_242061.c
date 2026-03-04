#include <cs50.h>
#include <stdio.h>

int main()
{
    int age = get_int("Enter your age: ");
    int citizen = get_int("Are you a citizen? (1 = Yes, 0 = No): ");

    if (age >= 18)
    {
        if (citizen == 1)
        {
            printf("Eligible to Vote\n");
        }
        else
        {
            printf("Not Eligible (Not Citizen)\n");
        }
    }
    else
    {
        printf("Not Eligible (Under Age)\n");
    }

    return 0;
}
