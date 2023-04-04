/*
Name        : ISAA KAZI
Date        : 10/02/2023
Description : A30 - WAP to generate fibbonacci numbers using recursion
Sample I/O  : Enter a number: 10
Sample O/P  : 0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>

int fib(int num);

int main()
{
    // Declaration of datatypes and variables used in this program.
    int num;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        fib(num);
    }
    else
    {
        printf("Invalid input");
    }
}

int fib(int num)
{
    // Initialization of the datatype and variable that is used in this function.
    static int first = 0, second = 1, new;

    // Printing the first variable.
    printf("%d, ", first);

    // Algorithum for the fibonacci.
    new = first + second;
    first = second;
    second = new;

    // While first is less than than equal to input number call function.
    while (first <= num)
        fib(num);
}