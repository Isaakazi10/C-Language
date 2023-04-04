#include <stdio.h>

int main()
{
    int size, count;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter the numbers\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element of arr1: ", i);
        scanf("%d", &arr1[i]);

        printf("Enter the %d element of arr2: ", i);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
    }

    if (count == size)
    {
        printf("EQUAL");
    }
    else
    {
        printf("UNEQUAL");
    }
}