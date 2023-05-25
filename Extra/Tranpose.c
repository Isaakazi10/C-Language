#include <stdio.h>

int main()
{
    int row = 0, col = 0;
    printf("Enter the row: ");
    scanf("%d", &row);

    printf(" Enter the col: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter the values: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}