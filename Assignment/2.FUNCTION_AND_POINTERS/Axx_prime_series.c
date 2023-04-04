/*
Name        : ISAA KAZI
Date        : 08/02/2023
Description : Axx - WAP to generate the prime series upto the given limit using functions
Sample I/O  : Enter a number: 20
Sample O/P  : 2 3 5 7 11 13 17 19
*/
#include <stdio.h>

// Function prototype for the written function.
int is_prime(int num);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int num;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the num: ");
    scanf("%d", &num);

    // If input number is less than 2 then invalid input.
    if (num > 1)
    {
        // For every number less than equal to num is given to is_prime function.
        for (int i = 2; i <= num; i++)
        {
            // if is-prime function return 1 then print i.
            if (is_prime(i))
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        printf("Invalid input");
    }
}

// Defination and declaration of sec_largest function.
int is_prime(int num)
{
    // Algorithum to check is_prime.
    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {
            return 0;
        }
        else
        {
            if (i == (num - 1))
                return 1;
        }
    }
}