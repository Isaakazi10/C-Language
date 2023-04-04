/*
Name        : ISAA KAZI
Date        : 02/02/2023
Description : A24 - WAP to implement your own islower() function
Sample I/O  : Enter the character: a
Sample O/P  : Entered character is lower case alphabet
*/

#include <stdio.h>

// Function prototype for the written function.
int islow(char c);

int main()
{
    // Declaration of datatypes and variables used in this program.
    char c;

    // Printf and scanf are used to take an integer input form the user.
    printf(" Enter the character: ");
    scanf("%c", &c);

    // Calling of function in an condition.If the function returns 1 excecute if-statement else else-statement,
    if (islow(c))
    {
        printf("Entered character is lower case alphabet");
    }
    else
    {
        printf("Entered character is not lower case alphabet");
    }
}

// Defination and declaration of islow function.
int islow(char c)
{
    // if the input is between a and z then the function should return 1 else retuen 0.
    if ((c >= 'a') && (c <= 'z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}