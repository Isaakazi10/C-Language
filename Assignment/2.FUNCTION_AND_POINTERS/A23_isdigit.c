/*
Name        : ISAA KAZI
Date        : 02/02/2023
Description : A23 - WAP to implement your own isdigit() function.
Sample I/O  : Enter the character: a
Sample O/P  : Entered character is an hexadecimal digit
*/

#include <stdio.h>

// Function prototype for the written function.
int isdigi(char c);

int main()
{
    // Declaration of datatypes and variables used in this program.
    char c;

    // Printf and scanf are used to take an integer input form the user.
    printf(" Enter the character: ");
    scanf("%c", &c);

    // Calling of function in an condition.If the function returns 1 excecute if-statement else else-statement,
    if (isdigi(c))
    {
        printf("Entered character is an hexadecimal digit");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit");
    }
}

// Defination and declaration of isdigit function.
int isdigi(char c)
{
    // if the input is between A and F or a and f or 0 and 9 then the function should return 1 else retuen 0.
    if (((c >= 'A') && (c <= 'F')) || ((c >= 'a') && (c <= 'f')) || ((c >= '0') && (c <= '9')))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}