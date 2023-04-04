/*
Name        : ISAA KAZI
Date        : 02/02/2023
Description : A25 - WAP to implement your own ispunct() function
Sample I/O  : Enter the character: $
Sample O/P  : Entered character is punctuation character
*/

#include <stdio.h>

// Function prototype for the written function.
int ispun(char c);

int main()
{
    // Declaration of datatypes and variables used in this program.
    char c;

    // Printf and scanf are used to take an integer input form the user.
    printf(" Enter the character: ");
    scanf("%c", &c);

    // Calling of function in an condition.If the function returns 1 excecute if-statement else else-statement,
    if (ispun(c))
    {
        printf("Entered character is punctuation character");
    }
    else
    {
        printf("Entered character is not punctuation character");
    }
}

// Defination and declaration of ispun function.
int ispun(char c)
{
    // if the input is between A and Z or a and z or 0 and 9 or 'ascii 0' and 'ascii 31' or input is equal to 'ascii 127' then the function should return 0 else retuen 1.
    if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')) || ((c >= 0) && (c <= 32)) || (c == 127))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}