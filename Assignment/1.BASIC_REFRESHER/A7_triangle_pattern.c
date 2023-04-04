/*
Name        : ISAA KAZI
Date        : 11/01/2023
Description : A7 - WAP to print triangle pattern as shown below
Sample I/O  : Enter a number: 4
Sample O/P  : 1 2 3 4
              5   6
              7 8
              9
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program.
    int num, count = 1;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the number: ");
    scanf("%d", &num);

    // The algorithum for prinfting above pattern using 1 main for-loop and 1 sub-for-loop.
    for (int row = 1; row <= num; row++)
    {
        // For every iteration if row is equal to 1 or column is equal to 1 or row+column is equal to input number plus then print column else print space.
        for (int col = 1; col <= (num + 1 - row); col++)
        {
            if ((row == 1) || (col == 1) || (row + col == num + 1))
            {
                printf("%d ", count);
                count++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}