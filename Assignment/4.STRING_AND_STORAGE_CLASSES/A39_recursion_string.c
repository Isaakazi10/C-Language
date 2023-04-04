/*
Name        : ISAA KAZI
Date        : 15/02/2023
Description : A39 - WAP to reverse the given string using recursion method
Sample I/O  : Enter a string : Hello World
Sample O/P  : Reverse string is : dlroW olleH
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototype for the written function.
void rec_rev(char *str);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int len = 0;
    char str[100];

    // Taking input from user.
    printf("Enter a string(Only alphabetical (A to Z a to z and spaces)characters) : ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != 0; i++)
    {
        if (!(((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')) || (str[i] == 32)))
        {
            exit(0);
        }
    }

    // Function call.
    rec_rev(str);

    // Output of the rec_rev function.
    printf("Reverse string is : %s", str);
}

// Defination and declaration of replace_blank function.
void rec_rev(char *str)
{
    // Declaration of the variable
    static int i, temp, j = 0;

    // If j is equal to 0 then excecute if-statement.
    if (j == 0)
    {
        // To find the lenght of the string.
        for (i = 0; str[i] != 0; i++)
            ;
        i--;
    }

    // If j is less then half lenght of string then recursion.
    if (j <= (i / 2))
    {
        // Algorithum for reversing the string
        temp = str[j];
        str[j] = str[i - j];
        str[i - j] = temp;
        j++;
        rec_rev(str);
    }
}
