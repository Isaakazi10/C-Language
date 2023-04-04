/*
Name        : ISAA KAZI
Date        : 11/01/2023
Description : A4 - WAP to check if number is perfect or not
Sample I/O  : Enter a number: 28
Sample O/P  : Yes, entered number is perfect number
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int num, sum = 0;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the num is greater than zero then excecute if-statement else print error.
    if (num > 0)
    {
        // if the mod of given input number is equal to zero for every number less than equal to given input number then add that number.
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }

        // If the input is equal to half of sum the print perfect num else not a perfect number.
        if (num == sum)
        {
            printf("Yes, entered number is perfect number");
        }
        else
        {
            printf("No, entered number is not a perfect number");
        }
    }
    else
    {
        printf("Error : Invalid Input, Enter only positive number");
    }
}