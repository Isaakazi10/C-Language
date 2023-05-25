#include <stdio.h>
#include <string.h>

int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }

    for (int i = 0; i < (size - 1); i++)
    {
        if ((arr[i] > 0) && (arr[i] + 1) != arr[i + 1])
        {
            printf("%d ", arr[i] + 1);
            break;
        }
    }
}