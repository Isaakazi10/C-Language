/*
Name        : ISAA KAZI
Date        : 09/03/2023
Description : A49 - WAP to implement fragments using Array of Pointers
Sample I/O  : Enter no.of rows : 3
              Enter no of columns in row[0] : 4
              Enter no of columns in row[1] : 3
              Enter no of columns in row[2] : 5
              Enter 4 values for row[0] : 1 2 3 4
              Enter 3 values for row[1] : 2 5 9
              Enter 5 values for row[2] : 1 3 2 4 1
Sample O/P  :
*/

#include <stdio.h>
#include <stdlib.h>

// Declaration of a fragment and my_print function.
void fragments(float **arr, int row, int col[]);
void my_print(float **arr, int row, int col[]);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int row, j;

    // Geting inputs from the user
    printf("Enter no.of rows : ");
    scanf("%d", &row);

    // Getting size of diffrent columns.
    int col[row];
    for (int i = 0; i < row; i++)
    {
        printf("Enter no of columns in row[%d] : ", i);
        scanf("%d", &col[i]);
    }

    // Creation of FSSD Dynamic array.
    float *arr[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = calloc((col[i] + 1), sizeof(float));
    }

    // Entering the vales in the Dynamic array.
    for (int i = 0; i < row; i++)
    {
        printf("Enter %d values for row[%d] : ", col[i], i);
        for (int j = 0; j < col[i]; j++)
        {
            scanf("%f", &arr[i][j]);
        }
    }

    // Algorithum for getting the average for single row
    for (int i = 0; i < row; i++)
    {
        for (j = 0; j < col[i]; j++)
        {
            arr[i][col[i]] += arr[i][j];
        }
        arr[i][col[i]] = ((arr[i][col[i]]) / j);
    }

    // Calling my_print
    printf("\nBefore sorting output is:\n");
    my_print(arr, row, col);

    // Calling the  function.
    fragments(arr, row, col);

    // Calling my_print
    printf("\nAfter sorting output is:\n");
    my_print(arr, row, col);
}

// Defination of fragment function.
void fragments(float **arr, int row, int col[])
{
    // Algorithum for sorting the array.
    for (int i = 0; i < (row - 1); i++)
    {
        int tem;
        float *temp;
        for (int j = 0; j < (row - 1); j++)
        {
            if (arr[j][col[j]] > arr[j + 1][col[j + 1]])
            {
                temp = arr[j];
                tem = col[j];
                arr[j] = arr[j + 1];
                col[j] = col[j + 1];
                arr[j + 1] = temp;
                col[j + 1] = tem;
            }
        }
    }
}

// Defination of my_print function.
void my_print(float **arr, int row, int col[])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= col[i]; j++)
        {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
}