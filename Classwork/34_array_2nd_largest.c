#include <stdio.h>

int main()
{
    int size, largest, second_largest = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the numbers into array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if ((j == 0) && (largest < arr[i]))
            {
                largest = arr[i];
            }
            if ((j == 1) && (arr[i] < largest) && (arr[i] > second_largest))
            {
                second_largest = arr[i];
            }
        }
    }
    printf("largest: %d\n", largest);
    printf("2nd largest: %d", second_largest);
}