#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);

    int arr1[size][size];
    int arr2[size][size];
    int res[size][size];

    printf("Enter the values: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the values: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}