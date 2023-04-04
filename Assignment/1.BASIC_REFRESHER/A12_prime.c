/*
Name        : ISAA KAZI
Date        : 25/01/2023
Description : A12 - WAP to print all primes using Sieve of Eratosthenes method
Sample I/O  : Enter the value of 'n' : 20
Sample O/P  : The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int num, squart;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the value of 'n' : ");
    scanf("%d", &num);

    // For loop used below is to find square root of a num.
    for (int i = 1; (i * i) <= num; i++)
    {
        squart = i;
    }

    // printf("%d\n", squart);

    // If num is greater than 1 then excecute if-statement else print else-statement
    if (num > 1)
    {
        // Declarationof an array.
        int arr[(num - 2)];

        // For-loop to store num rangeing from 2 to input number.
        for (int i = 0; i <= (num - 2); i++)
        {
            arr[i] = i + 2;

            // printf("%d ", arr[i]);
        }

        // For-loop for index value.
        for (int i = 0; i <= (num - 2); i++)
        {
            // For loop for the divisor which is less than equal to sqaureroot of input number
            for (int j = 2; j <= squart; j++)
            {
                // if array value(i) is equal to divisor(j) then break.
                if (arr[i] == j)
                {
                    break;
                }

                // if mod of array with divisor(j) is equal to zero then change the current array value to zero.
                if (arr[i] % j == 0)
                {
                    arr[i] = 0;
                }
            }
        }

        // printf("\n");

        printf("The primes less than or equal to %d are : ", num);

        // To print the array.
        for (int i = 0; i <= (num - 2); i++)
        {
            // If any value is greater than 0 then print the value.
            if (arr[i] != 0)
            {
                printf("%d, ", arr[i]);
            }
        }
    }
    else
    {
        printf("Please enter a positive number which is > 1");
    }
}