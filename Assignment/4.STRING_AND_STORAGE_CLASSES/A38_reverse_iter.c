/*
Name        : ISAA KAZI
Date        : 15/02/2023
Description : A38 - WAP to reverse the given string using iterative method
Sample I/O  : Enter a string : Hello World
Sample O/P  : Reverse string is : dlroW olleH
*/

#include <stdio.h>

// Function prototype for the written function.
void rev_iter(char str[], int i);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char str[500];
    int i;

    // Taking input from user.
    printf("Enter a string : ");
    scanf("%[^\n]", str);

    // To find the lenght of the string.
    for (i = 0; str[i] != 0; i++)
        ;
    i--;

    // Function call.
    rev_iter(str, i);

    // Output of the rem_dup function.
    printf("Reverse string is %s", str);
}

// Defination and declaration of replace_blank function.
void rev_iter(char str[], int i)
{
    // Declaration of the variable
    int temp;

    // Algorithum to reverse the string.
    for (int j = 0; j <= (i / 2); j++)
    {
        temp = str[j];
        str[j] = str[i - j];
        str[i - j] = temp;
    }
}