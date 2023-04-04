/*
Name        : ISAA KAZI
Date        : 21/02/2023
Description : A43 - WAP to print all possible combinations of given string.
Sample I/O  : Enter a string: abc
Sample O/P  : All possible combinations of given string :abc
              acb
              bca
              bac
              cab
              cba
*/

#include <stdio.h>

// Function prototype for the written function.
void comb(char str[], int len, int fact);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char str[10];
    int len = 0, fact = 1;

    // Taking input from user.
    printf("Enter a string(ascii 33 to 126): ");
    scanf(" %[^\n]", str);

    // Finding the lenght of the string.
    for (int i = 0; str[i] != 0; i++)
    {
        len++;
    }

    if (len == 1)
    {
        printf("1- %s", str);
        return 0;
    }

    // To find factorial of the lenght.
    for (int i = len; i >= 1; i--)
    {
        fact = fact * i;
    }

    // If the user has give same characters then error.
    for (int i = 0; i < len; i++)
    {
        for (int j = (i + 1); j < len; j++)
        {
            if (str[i] == str[j] && (str[i] > 32 && str[i] < 127))
            {
                printf("Error : Enter distinct characters");
                return 0;
            }
        }
    }

    // Function call.
    comb(str, len, fact);
}

// Defination and declaration of nrps function.
void comb(char str[], int len, int fact)
{
    // Declaration of the variable
    int k;
    char temp;

    printf("All possible combinations of given string :\n");

    // Algorithum to print all possible combinations of given string.
    for (int i = 0; i < (fact); i++)
    {
        int k = i;

        if (k >= (len - 1))
        {
            k = k % (len - 1);
        }

        temp = str[k];
        str[k] = str[len - 1];
        str[len - 1] = temp;

        printf("%d - %s\n", i + 1, str);
    }
}