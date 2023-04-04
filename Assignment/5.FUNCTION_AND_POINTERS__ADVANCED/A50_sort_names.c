/*
Name        : ISAA KAZI
Date        : 16/03/2023
Description : A50 - Read n & n person names of maxlen 20. Sort and print the names.
Sample I/O  : Enter the size: 5

              Enter the 5 names of length max 20 characters in each
              [0] -> Delhi
              [1] -> Agra
              [2] -> Kolkata
              [3] -> Bengaluru
              [4] -> Chennai

Sample O/P  : The sorted names are:
              Agra
              Bengaluru
              Chennai
              Delhi
              Kolkata
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void name_2D(char **, int);
void sort_names(char **, int col);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int col;

    // Geting inputs from the user for name_2D A
    printf("Enter the size: ");
    scanf("%d", &col);

    // Creating name_2D_A(both dynamic)
    char **name_ptr = calloc(col, sizeof(char *));
    name_2D(name_ptr, col);

    printf("\nEnter the %d names of length max 20 characters in each\n", col);
    for (int i = 0; i < col; i++)
    {
        printf("[%d] -> ", i);
        scanf(" %s", name_ptr[i]);
    }

    sort_names(name_ptr, col);

    // Printing the
    printf("\nThe sorted names are:\n");
    for (int i = 0; i < col; i++)
    {
        printf("%s\n", name_ptr[i]);
    }

    free(name_ptr);
}

void sort_names(char *name_ptr[], int col)
{
    char temp[20];

    for (int i = 0; i < (col - 1); i++)
    {
        for (int j = 0; j < (col - 1); j++)
        {
            for (int k = 0; name_ptr[j][k] != 0; k++)
            {
                if (name_ptr[j][k] > name_ptr[j + 1][k])
                {
                    /*temp = name_ptr[j];
                    name_ptr[j] = name_ptr[j + 1];
                    name_ptr[j + 1] = temp;*/
                    strcpy(temp, name_ptr[j]);
                    strcpy(name_ptr[j], name_ptr[j + 1]);
                    strcpy(name_ptr[j + 1], temp);
                    break;
                }
                else if (name_ptr[j][k] == name_ptr[j + 1][k])
                {
                    continue;
                }
                else
                    break;
            }
        }
    }
}

// Defination of my_print function.
void name_2D(char **name_ptr, int col)
{
    // Creating 1D-arrays
    for (int i = 0; i < col; i++)
    {
        name_ptr[i] = calloc(20, sizeof(char));
    }
}