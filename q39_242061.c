#include <cs50.h>
#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = get_int("Enter value %d: ", i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    average = sum / 5.0;
    
    printf("Average = %.2f\n", average);

    return 0;
}
