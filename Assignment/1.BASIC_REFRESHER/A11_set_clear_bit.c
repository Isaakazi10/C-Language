/*
Name        : ISAA KAZI
Date        : 20/01/2023
Description : A11 - WAP to check N th bit is set or not, If yes, clear the M th bit
Sample I/O  : Enter the number: 19
              Enter 'N': 1
              Enter 'M': 4
Sample O/P  : Updated value of num is 3.
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int num, M, N;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter 'N': ");
    scanf("%d", &N);

    printf("Enter 'M': ");
    scanf("%d", &M);

    // If Nth position of input number is not equal to zero then print cleared value of input number using Mth value else print num.
    if ((num & (1 << N)))
    {
        printf("Updated value of num is %d", (num & ~(1 << M)));
    }
    else
    {
        printf("Updated value of num is %d", num);
    }
}