/*
Name        : ISAA KAZI
Date        : 25/01/2023
Description : Axx - WAP to check whether a given number is prime or not.
Sample I/O  : Enter a number: 2
Sample O/P  : 2 is a prime number
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int num, count = 0;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter a number: ");
    scanf("%d", &num);

    // If num is greater than 0 excecute if-statement else print invalid input.
    if (num > 0)
    {
        // For mod of a num is 0 than count++ for the iteration less than equal to half of num.
        for (int i = 2; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        // if count is greater than zero or num is equal to 1 or 0 then print num is not prime number or num is prime number.
        if (count > 0 || num == 1)
        {
            printf("%d is not a prime number", num);
        }
        else
        {
            printf("%d is a prime number", num);
        }
    }
    else
    {
        printf("Invalid input");
    }
}