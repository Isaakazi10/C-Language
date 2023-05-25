#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    int tempa[size];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        tempa[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (tempa[j] == 1)
            {
                continue;
            }

            if (arr[i] == arr[j])
            {
                tempa[i] = 1;
                tempa[j] = 1;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (tempa[i] == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}