/*
Name        : ISAA KAZI
Date        : 02/02/2023
Description : A22 - WAP to implement your own isalnum() function
Sample I/O  : Enter the character: a
Sample O/P  : The character 'a' is an alnum character.
*/

#include <stdio.h>

// Function prototype for the written function.
int isalpnum(char c);

int main()
{
    // Declaration of datatypes and variables used in this program.
    char c;

    // Printf and scanf are used to take an integer input form the user.
    printf(" Enter the character: ");
    scanf("%c", &c);

    // Calling of function in an condition.If the function returns 1 excecute if-statement else else-statement,
    if (isalpnum(c))
    {
        printf("Entered character is alphanumeric character");
    }
    else
    {
        printf("Entered character is not alphanumeric character");
    }
}

// Defination and declaration of alphanum function.
int isalpnum(char c)
{
    // if the input is between A and Z or a and z or 0 and 9 then the function should return 1 else retuen 0.
    if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')) || ((c >= '0') && (c <= '9')))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}