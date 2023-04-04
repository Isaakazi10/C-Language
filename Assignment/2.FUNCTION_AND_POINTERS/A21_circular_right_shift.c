/*
Name        : ISAA KAZI
Date        : 01/02/2023
Description : A21 - WAP to implement Circular right shift
Sample I/O  : Enter num: 12
              Enter n : 3
Sample O/P  : Result in Binary: 10000000 00000000 00000000 00000001
*/

#include <stdio.h>

// Function prototype for circular right shift and printing decimal to binary fuctions.
int cir_right(unsigned int num, int bits);
int print_bits(int result, int i);

int main()
{
    // Declaration of datatypes and variables used in this program.
    int num, bits, result;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter num: ");
    scanf("%d", &num);

    printf("Enter n : ");
    scanf("%d", &bits);

    // Result of circular right will be stored in a variable.
    result = cir_right(num, bits);

    printf("Result in Binary: ");

    for (int i = 31; i >= 0; i--)
    {
        // Caliing a fuction and If the function is returning 1 then print 1 else 0.
        if (print_bits(result, i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}

// Defination and declaration of a circular left shift function.
int cir_right(unsigned int num, int bits)
{
    // Algorithum to implement Circular right shift.
    return ((num >> bits) | (((num & (((1 << bits) - 1))) << (32 - bits))));
}

// Defination and declaration of a printing decimal to binary function.
int print_bits(int result, int i)
{
    // If and of num with 1 is non-zero value then return 1 else return 0.
    if (result & (1 << i))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}