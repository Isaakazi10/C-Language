/*
Name        : ISAA KAZI
Date        : 31/01/2023
Description : A19 - WAP to put the (b-a+1) lsb’s of num into val[b:a]
Sample I/O  : Enter the value of 'num' : 11
              Enter the value of 'a' : 3
              Enter the value of 'b' : 5
              Enter the value of 'val': 174
Sample O/P  : Result : 158
*/

#include <stdio.h>

// Defination and declaration of a function.
int new_bit(int num, int bits, int val)
{
    // Algorithum to put the (b-a+1) lsb’s of num into val[b:a]
    return ((val & ~(((1 << bits) - 1) << (bits))) | ((num & ((1 << bits) - 1)) << (bits)));
}

int main()
{
    // Declaration of datatypes and variables used in this program.
    int num, a, b, val, result;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the value of 'num' : ");
    scanf("%d", &num);

    printf("Enter the value of 'a' : ");
    scanf("%d", &a);

    printf("Enter the value of 'b' : ");
    scanf("%d", &b);

    // If the value of b is greater than equal to a and lesser than equal to 31 than excecute if_statement else print invalid input.
    if (b >= a && b <= 31)
    {
        // Printf and scanf are used to take an integer input form the user.
        printf("Enter the value of 'val' : ");
        scanf("%d", &val);

        // Storing the number of bits to replace in an sperate variable
        int bits = (b - a + 1);

        // callling a function and printing its result.
        printf("Result : %d", new_bit(num, bits, val));
    }
    else
    {
        printf("Invalid Input(a<=b<=31)");
    }
}
