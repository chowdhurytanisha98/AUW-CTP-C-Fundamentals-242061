#include <cs50.h>
#include <stdio.h>

string say_hello();

int main()
{
    string msg = say_hello();
    printf("%s\n", msg);
}

string say_hello()
{
    return "Hello";
}
