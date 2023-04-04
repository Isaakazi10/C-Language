/*
Name        : ISAA KAZI
Date        : 20/02/2023
Description : A44 - WAP to check given string is Pangram or not
Sample I/O  : Enter the string: The quick brown fox jumps over the lazy dog
Sample O/P  : The Entered String is a Pangram String
*/

#include <stdio.h>

// Function prototype for the written function.
int pangram(char str[]);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char str[500];

    // Taking input from user.
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    // Function call and if the function return 1 then excecute if-statement else else-statement.
    if (pangram(str))
    {
        printf("The Entered String is a Pangram String");
    }
    else
    {
        printf("The Entered String is not a Pangram String");
    }
}

// Defination and declaration of pangram function.
int pangram(char str[])
{
    // initializaion of the array
    int arr[26] = {0};

    // For element in str is within ascii value of 65 to 90 or 97 to 122 then assign 1 to arr[str[i] - 65(Capital)/97(small)]
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            arr[str[i] - 65] = 1;
        }

        if (str[i] >= 97 && str[i] <= 122)
        {
            arr[str[i] - 97] = 1;
        }
    }

    // If the element of array containing single 0 then return 0.
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            return 0;
        }
    }

    return 1;
}