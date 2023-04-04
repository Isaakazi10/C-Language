/*
Name        : ISAA KAZI
Date        : 08/03/2023
Description : A48 - WAP to generate a n*n magic square
Sample I/O  : Enter a number: 3
Sample O/P  : 8      1      6
              3      5      7
              4      9      2
*/

#include <stdio.h>
#include <stdlib.h>

// Declaration of a magic_square function.
void magic_square(int **ptr, int row, int col);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int size;

    // Geting inputs from the user
    printf("Enter the size: ");
    scanf("%d", &size);

    // If the size is below 2 or size mod by is eqaul to zero the exceucte if-condition and exit the program.
    if ((size <= 1) || ((size % 2) == 0))
    {
        printf("Please enter only positive odd values");
        return 0;
    }

    // Creation of Dynamic array.
    int **ptr = malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++)
    {
        ptr[i] = calloc(size, sizeof(int));
    }

    // Calling the magic_square function.
    magic_square(ptr, size, size);

    // Printing the Dynamic array.
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d  ", ptr[i][j]);
        }
        printf("\n");
    }
}

// Defination of magic_square function.
void magic_square(int **ptr, int row, int col)
{
    // DEclaration and initialization of variables used in the function.
    int count = 0, i = 0, j = (col / 2), tempr, tempc;

    // While count is not equal to row*col, then keep running the loop.
    for (; count != (row * col);)
    {
        // If count is equalt o zero then assign 1 to ptr[i][j]
        if (count == 0)
        {
            ptr[i][j] = (++count);
        }

        // String values of i and j in temprory vcariable for later usage.
        tempr = i;
        tempc = j;

        // If --i is equal to 1 then assign row-1 to i.
        if ((--i) == -1)
        {
            i = (row - 1);
        }

        // if ++j is equal to col the assign 0 to j.
        if ((++j) == col)
        {
            j = 0;
        }

        // if ptr[i][j] is not equal to 0 then excecute if-condtion else else-condition.
        if (ptr[i][j] != 0)
        {
            i = tempr;
            ptr[++i][j = tempc] = ++count;
        }
        else
        {
            ptr[i][j] = ++count;
        }
    }
}