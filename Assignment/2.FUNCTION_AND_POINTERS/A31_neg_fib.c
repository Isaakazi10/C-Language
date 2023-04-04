/*
Name        : ISAA KAZI
Date        : 10/02/2023
Description : A30 - WAP to generate fibbonacci numbers using recursion
Sample I/O  : Enter a number: -21
Sample O/P  : 0, 1, -1, 2, -3, 5, -8, 13, -21
*/

#include <stdio.h>

int neg_fib(int num);

int main()
{
    // Declaration of datatypes and variables used in this program.
    int num;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the input number is less than equal to 0 then excecute if-ststement else invalid input.
    if (num <= 0)
    {
        // calling of funtion.
        neg_fib(num);
    }
    else
    {
        printf("Invalid input");
    }
}

int neg_fib(int num)
{
    // Initialization of the datatype and variable that is used in this function.
    static int first = 0, second = 1, new, temp = 0;

    // Printing the first variable.
    printf("%d, ", first);

    // Algorithum for the negative fibonacci.
    new = first - second;
    first = second;
    second = new;

    temp = first;
    // If temp is greater than zero then temp is equal to negative temp.
    if (temp > 0)
    {
        temp = (-temp);
    }

    // While temp is greater than  equal to input number call function.
    while ((temp) >= num)
        neg_fib(num);
}