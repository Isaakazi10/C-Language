#include <stdio.h>

int main()
{
    int size, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    printf("%d", count);
}