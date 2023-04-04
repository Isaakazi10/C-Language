/*
Name        : ISAA KAZI
Date        : 11/01/2023
Description : A6 - WAP to print the numbers in X format as shown below
Sample I/O  : Enter a number: 6
Sample O/P  : 1         6
                2     5
                  3 4
                  3 4
                2     5
              1         6
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int num;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the number: ");
    scanf("%d", &num);

    // The algorithum for prinfting above pattern using 1 main for-loop and 1 sub-for-loop.
    for (int row = 1; row <= num; row++)
    {
        // For every itertration if row is equal column or if row+column is equal to given input plus 1 then print colume else print space.
        for (int col = 1; col <= (num); col++)
        {
            if ((row == col) || (row + col == num + 1))
            {
                printf("%d", col);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}