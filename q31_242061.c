#include <cs50.h>
#include <stdio.h>

int main()
{
    int mark = get_int("Enter your mark: ");

    if (mark < 0 || mark > 100)
    {
        printf("Invalid Mark\n");
    }
    else if (mark >= 80 && mark <= 100)
    {
        printf("Grade A\n");
    }
    else if (mark >= 70 && mark <= 79)
    {
        printf("Grade B\n");
    }
    else if (mark >= 60 && mark <= 69)
    {
        printf("Grade C\n");
    }
    else if (mark >= 50 && mark <= 59)
    {
        printf("Grade D\n");
    }
    else 
    {
        printf("Grade F\n");
    }

    return 0;
}
