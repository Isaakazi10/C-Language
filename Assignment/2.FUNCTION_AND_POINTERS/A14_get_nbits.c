/*
Name        : ISAA KAZI
Date        : 27/01/2023
Description : A14 - WAP to get 'n' bits of a given number
Sample I/O  : Enter the number: 10
              Enter number of bits: 3
Sample O/P  : Result = 2
*/

#include <stdio.h>

// Declaration of function.
int get_bits(int n, int bits)
{
    // Algorithm to get 'n' bits of a given number
    return (n & ((1 << bits) - 1));
}

int main()
{
    // Declaration of datatypes used in this program
    int num, bits;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter number of bits: ");
    scanf("%d", &bits);

    // Here we are calling a function,giving some argument and printing its result.
    printf("Result = %d", get_bits(num, bits));
}
