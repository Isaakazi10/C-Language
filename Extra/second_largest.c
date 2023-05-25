#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = arr[0];

    for (int j = 0; j < size; j++)
    {
        if (largest < arr[j])
        {
            largest = arr[j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if ((second < arr[i]) && (arr[i] < largest))
        {
            second = arr[i];
        }
    }

    printf("%d", second);
}