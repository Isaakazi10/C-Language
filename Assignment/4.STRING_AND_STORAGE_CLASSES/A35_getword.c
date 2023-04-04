/*
Name        : ISAA KAZI
Date        : 14/02/2023
Description : A35 - WAP to implement getword function
Sample I/O  : Enter the string : Welcome to Emertxe
Sample O/P  : You entered Welcome and the length is 7
*/

#include <stdio.h>

// Function prototype for the written function.
void get_word(char str[], int *len);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int len = 0;
    char str[500];

    // Taking input from user.
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);

    // Function call.
    get_word(str, &len);

    // Output of the rem_dup function.
    printf("You entered %s and the length is %d", str, len);
}

// Defination and declaration of replace_blank function.
void get_word(char str[], int *len)
{
    // Declaration of the variable
    int i;

    // For every element in array if character is not between from ascii value 0 to 32 and 127 then len++.
    for (i = 0; (!(((str[i] >= 0) && (str[i] <= 32)) || (str[i] == 127))); i++)
    {
        (*len)++;
    }

    // If character is between from ascii value 0 to 32 and 127 then str[i]=0.
    if ((str[i] >= 0) && (str[i] <= 32) || (str[i] == 127))
        str[i] = 0;
}