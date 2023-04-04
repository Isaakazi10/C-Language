#include <stdio.h>

int main()
{
    int temp, count = 0;

    int arr[10] = {1, 0, 5, 0, 6, 7, 9, 0, 0, 0};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = count; j < 9; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}