/*
Name        : ISAA KAZI
Date        : 10/02/2023
Description : A34 - WAP to replace each string of one or more blanks by a single blank.
Sample I/O  : Enter the string with more spaces in between two words
              Pointers     are               sharp     knives.
Sample O/P  : Pointers are sharp knives.
*/

#include <stdio.h>

// Function prototype for the written function.
void replace_blank(char str[]);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char str[100];

    // Taking input from user.
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);

    // Function call.
    replace_blank(str);

    // Output of the rem_dup function.
    printf("%s\n", str);
}

// Defination and declaration of replace_blank function.
void replace_blank(char str[])
{
    // Declaration of the variable
    int j, temp;

    // For every element in array.
    for (int i = 0; str[i] != 0; i++)
    {
        // if ith and (ith+1) of the string are equal to ascii of 32 then excecute if-statement.
        if ((str[i] == ' ') && str[i + 1] == ' ')
        {
            // Algorithum for modifying the string with more spaces in between two words
            for (j = i; str[j + 1] != 0; j++)
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }

            // To change last element of string with 0(null).
            str[j] = 0;

            // if ith and (i+1)th of the string are equal to ascii of 32 the excecute if-statement.
            if ((str[i] == ' ') && (str[i + 1] == ' '))
            {
                i--;
            }
        }
    }
}

/*void replace_blank(char *str)
{
    int count = 0; // declaring the variable as int
    // using for loop,removing the extra spaces between the words
    for (int i = 0; i < 500; i++)
    {
        if (str[i] == 32 || str[i] == 9 || str[i] == 10) // if the value of the array element equals the condition,then incrementing count
        {
            count++;
        }
        else
        {
            if (count > 1)
            {
                // using for loop,replacing the extra space with characters by shifting the next charcter to previous.
                for (int j = (i - count + 1); j < 500; j++)
                {
                    if (j > (499 - count + 1) && j <= 499) // if the condition is true,then assingning null character to the element
                    {
                        *(str + j) = '\0';
                    }
                    else
                    {
                        *(str + j) = str[j + count - 1];
                    }
                }
                i = i - (count + 1);
            }
            count = 0;
        }
    }
}*/