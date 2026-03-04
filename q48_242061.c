#include <cs50.h>
#include <stdio.h>

string check(int n);

int main()
{
    int num = get_int("Enter a number: ");

    string result = check(num);
    printf("%s\n", result);
}

string check(int n)
{
    if (n == 0)
        return "Zero is neither even nor odd";

    if (n % 2 == 0)
        return "Even";
    else
        return "Odd";
}
