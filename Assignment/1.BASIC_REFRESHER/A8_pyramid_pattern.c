/*
Name        : ISAA KAZI
Date        : 12/01/2023
Description : A8 - WAP to print pyramid pattern as shown below.
Sample I/O  : Enter the number: 5
Sample O/P  : 5
              4 5
              3 4 5
              2 3 4 5
              1 2 3 4 5
              2 3 4 5
              3 4 5
              4 5
              5
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int num;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the number: ");
    scanf("%d", &num);

    // The algorithum for printing above pattern using 1 main for-loop and 1 sub-for-loop.
    for (int row = 1; row <= (2 * num - 1); row++)
    {
        // For every iteration if row is less than equal to input, print count=(num-row+column) else count=(row-num+column) print count and if count is greater than num,break the current iteration.
        for (int col = 1; col <= row; col++)
        {
            if (row <= (num))
            {
                int count = (num - row + col);
                printf("%d ", count);
            }
            else
            {
                int count = row - num + col;
                if (count > num)
                {
                    break;
                }
                printf("%d ", count);
            }
        }
        printf("\n");
    }
}