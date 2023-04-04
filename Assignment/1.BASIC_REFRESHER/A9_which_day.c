/*
Name        : ISAA KAZI
Date        : 17/01/2023
Description : A9 - WAP to find which day of the year
Sample I/O  : Enter the value of 'n' : 9
              Choose First Day :
              1. Sunday
              2. Monday
              3. Tuesday
              4. Wednesday
              5. Thursday
              6. Friday
              7. Saturday
              Enter the option to set the first day : 2
Sample O/P  : The day is Tuesday
*/

#include <stdio.h>

int main()
{
    // Declaration of datatypes used in this program
    int n, First_day, result;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the value of 'n' : ");
    scanf("%d", &n);

    // If the input is greater than 0 and less than equal to 365 then excecute if-statement else print error.
    if (n > 0 && n <= 365)
    {
        // If the number is greater than 7 then mod of that number will be stored in the same variable.
        if (n > 7)
        {
            n = n % 7;
        }

        printf("Choose First Day : \n 0. Saturday \n 1. Sunday \n 2. Monday \n 3. Tuesday \n 4. Wednesday \n 5. Thursday \n 6. Friday \n ");

        // Printf and scanf are used to take an integer input form the user.
        printf("Enter the option to set the first day : ");
        scanf("%d", &First_day);

        // The mod of sum of First_day and input number minus one will be stored in result.
        result = ((First_day + n - 1) % 7);

        // if First_day is greater than 0 and result and less than 8 then excecute if-statement else print error.
        if (First_day > 0 && First_day <= 7)
        {
            // The switch case.
            switch (result)
            {
            case 0:
                printf("The day is Saturday");
                break;

            case 1:
                printf("The day is Sunday");
                break;

            case 2:
                printf("The day is Monday");
                break;

            case 3:
                printf("The day is Tuesday");
                break;

            case 4:
                printf("The day is Wednesday");
                break;

            case 5:
                printf("The day is Thursday");
                break;

            case 6:
                printf("The day is Friday");
                break;
            }
        }
        else
        {
            printf("Error: Invalid input, first day should be > 0 and <= 7");
        }
    }
    else
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365");
    }
}