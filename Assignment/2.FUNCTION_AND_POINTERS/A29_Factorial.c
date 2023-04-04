/*
Name        : ISAA KAZI
Date        : 03/02/2023
Description : A29 - WAP to find factorial of given number using recursion
Sample I/O  : Enter the value of N : 7
Sample O/P  : Factorial of the given number is 5040
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes and variables used in this program.
    static int num, res = 1, count = 0;
    static unsigned long long int fact = 1;

    // If res is equal to 1 than excecute if_statement else ignore this statement.
    if (res == 1)
    {
        // Printf and scanf are used to take an integer input form the user.
        printf("Enter the value of N : ");
        scanf("%d", &num);

        res++;

        // if the input is less than zero then print Invalid input.
        if (num < 0)
        {
            printf("Invalid Input");
        }
    }

    // If te num is greater than zero then excecute if-statement.
    if (num > 0)
    {
        // Algorithum to find factorial using main() recursion by calling main.
        fact = fact * num--;
        main();
    }

    // If num is equal to count then excecute if-statement.
    if (num == count)
    {
        printf("Factorial of the given number is %lld", fact);
        count++;
    }
}