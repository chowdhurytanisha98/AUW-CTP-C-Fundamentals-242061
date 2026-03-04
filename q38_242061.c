#include <cs50.h>
#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter value %d: ", i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);

    return 0;
}
