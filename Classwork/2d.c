#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter row and col: ");
    scanf("%d%d", &row, &col);

    int arr[row][col];

    printf("Enter the numbers: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf(" %d", &arr[i][j]);
        }
    }

    int smallest = arr[0][0], largest = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (largest <= arr[i][j])
            {
                largest = arr[i][j];
            }

            if (smallest >= arr[i][j])
            {
                smallest = arr[i][j];
            }
        }
    }

    printf("Largest: %d, Smallest: %d\n", largest, smallest);
}