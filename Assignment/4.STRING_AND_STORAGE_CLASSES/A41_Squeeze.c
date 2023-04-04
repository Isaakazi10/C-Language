/*
Name        : ISAA KAZI
Date        : 16/02/2023
Description : A41 - Squeeze the character in s1 that matches any character in the string s2
Sample I/O  : Enter s1 : Dennis Ritchie
              Enter s2 : Linux
Sample O/P  : After squeeze s1 : Des Rtche
*/

#include <stdio.h>

// Function prototype for the written function.
void squeeze_fun(char str1[], char str2[]);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char str1[100];
    char str2[100];

    // Taking input from user.
    printf("Enter s1 : ");
    scanf("%[^\n]", str1);

    printf("Enter s2 : ");
    scanf(" %[^\n]", str2);

    // Function call.
    squeeze_fun(str1, str2);

    // Output of the Squeeze_fun function.
    printf("After squeeze s1 : %s", str1);
}

// Defination and declaration of squeeze_fun function.
void squeeze_fun(char str1[], char str2[])
{
    // Declaration of the variable
    int k, temp, tem;

    // For every element in str1 which is equal to str2 the excecute if-statement.
    for (int i = 0; str2[i] != 0; i++)
    {
        for (int j = 0; str1[j] != 0; j++)
        {
            if (str2[i] == str1[j])
            {
                // str1[j] is equal to str1[j+1] the store str1[j] in a tem variable.
                if (str1[j] == str1[j + 1])
                {
                    tem = str1[j];
                }

                // Algorithum for squeezing the character in s1 that matches any character in the string s2.
                for (k = j; str1[k + 1] != 0; k++)
                {
                    temp = str1[k];
                    str1[k] = str1[k + 1];
                    str1[k + 1] = temp;
                }

                // If str1[j] is equal to tem variable then decrease the j variable.
                if (str1[j] == tem)
                {
                    j--;
                }

                // To change last element of string with 0(null).
                str1[k] = 0;
            }
        }
    }
}