/*
Name        : ISAA KAZI
Date        : 10/03/2023
Description : A51 - WAP to find the product of given matrix.
Sample I/O  : Enter number of rows : 3
              Enter number of columns : 3
              Enter values for 3 x 3 matrix :
              1      2      3
              1      2      3
              1      2      3
              Enter number of rows : 3
              Enter number of columns : 3
              Enter values for 3 x 3 matrix :

              1      1     1
              2      2     2
              3      3     3
Sample O/P  : Product of two matrix :
              14      14      14
              14      14      14
              14      14      14
*/

#include <stdio.h>
#include <stdlib.h>

// Declaration of a matrix and my_print function.
int matrix_mul(int **mat_A, int row_A, int col_A, int **mat_B, int row_B, int col_B, int **res_mat, int res_row, int res_col);
void matrix(int **mat, int row, int col);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int row_A = 0, col_A = 0, row_B = 0, col_B = 0;

    // Geting inputs from the user for matrix A
    printf("Enter no.of rows : ");
    scanf("%d", &row_A);
    printf("Enter number of columns : ");
    scanf("%d", &col_A);

    // Creating matrix_A(both dynamic)
    int **mat_A = calloc(row_A, sizeof(int *));
    matrix(mat_A, row_A, col_A);

    // Geting inputs from the user for matrix B
    printf("Enter no.of rows : ");
    scanf("%d", &row_B);
    printf("Enter number of columns : ");
    scanf("%d", &col_B);

    // If column of matrx_A is not equal to row of matrix_B then print Matrix multiplication is not possible and terminate the program.
    if (col_A != row_B)
    {
        printf("Matrix multiplication is not possible");
        return 0;
    }

    // Creating matrix_B(both dynamic)
    int **mat_B = calloc(row_B, sizeof(int *));
    matrix(mat_B, row_B, col_B);

    // Creating matrix to store the results from multipling the matrices.
    int **res_mat = calloc(row_A, sizeof(int *));
    matrix(res_mat, row_A, col_A);

    // Calling the matrix_mul function.
    matrix_mul(mat_A, row_A, col_A, mat_B, row_B, col_B, res_mat, row_A, col_A);

    // Printing the res_mat matrix.
    printf("\nProduct of two matrix :\n");
    for (int i = 0; i < row_A; i++)
    {
        for (int j = 0; j < col_B; j++)
        {
            printf("%d ", res_mat[i][j]);
        }
        printf("\n");
    }

    // To free the Dynammic memory.
    free(mat_A);
    free(mat_B);
    free(res_mat);
}

// Defination of matrix_mul function.
int matrix_mul(int **mat_A, int row_A, int col_A, int **mat_B, int row_B, int col_B, int **res_mat, int res_row, int res_col)
{
    for (int i = 0; i < (row_A); i++)
    {
        for (int j = 0; j < (col_B); j++)
        {
            for (int k = 0; k < (row_B); k++)
            {
                res_mat[i][j] = res_mat[i][j] + mat_A[i][k] * mat_B[k][j];
            }
        }
    }
}

// Defination of my_print function.
void matrix(int **mat, int row, int col)
{
    // Declaration or initialization of variables used in this function
    static int count = 0;

    // Creating 1D-arrays
    for (int i = 0; i < row; i++)
    {
        mat[i] = calloc(col, sizeof(sizeof(int)));
    }

    // If count is equal to 3 then return.
    if (++count == 3)
    {
        return;
    }

    // Algorithum for entering the input into the matrices
    printf("Enter values for %d x %d matrix :", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}