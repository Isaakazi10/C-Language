/*
Name        : ISAA KAZI
Date        : 27/01/2023
Description : A18 - WAP to print 'n' bits from LSB of a number.
Sample I/O  : Enter the number: 10
              Enter number of bits: 12
Sample O/P  : Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
*/

#include <stdio.h>

// Declaration of function.
int print_bits(int num, int i)
{
    // If and of num with 1 is non-zero value then return 1 else return 0.
    if (num & (1 << i))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // Declaration of datatypes used in this program
    int num, bits, pos;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter number of bits: ");
    scanf("%d", &bits);

    // The 'n' bits is greater than 32 then 32 should be assigned to bits.
    if (bits > 32)
    {
        bits = 32;
    }

    printf("Binary form of %d: ", num);

    // For loop is used for print within given bits.
    for (int i = (bits - 1); i >= 0; i--)
    {
        // Caliing a fuction and If the function is returning 1 then print 1 else 0.
        if (print_bits(num, i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}