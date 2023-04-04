/*
Name        : ISAA KAZI
Date        : 19/01/2023
Description : A10 - WAP to count number of set bits in a given number and print parity
Sample I/O  : Enter the number : 15
Sample O/P  : Bit parity is Even
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int num, count = 0;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the number: ");
    scanf("%d", &num);

    // To find set bits in a value we have to use for loop.
    for (int i = 0; i < 32; i++)
    {
        // if the bit of a num is not equal to zero than count++.
        if ((num & (1 << i)) != 0)
        {
            count++;
        }
    }

    // Displaying the set bits.
    printf("Number of set bits = %d", count);
    printf("\n");

    // if the 1 & 1st bit of the count is equal to 0 print even else odd.
    if ((count & 1) == 0)
    {
        printf("Bit parity is Even");
    }
    else
    {
        printf("Bit parity is Odd");
    }
}