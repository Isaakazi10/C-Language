/*
Name        : ISAA KAZI
Date        : 08/02/2023
Description : Axx - WAP to check whether a given number is prime or not using function.
Sample I/O  : Enter a number: 2
Sample O/P  : 2 is a prime number
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

    if (num > 0)
    {
        //
        if (is_prime(num))
        {
            printf("%d is a prime number", num);
        }
        else
        {
            printf("%d is not a prime number", num);
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
    // input number is 1 then return 0.
    if (num == 1)
    {
        return 0;
    }
    // Algorithum to check is_prime.
    for (int i = 2; i <= (num / 2); i++)
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
