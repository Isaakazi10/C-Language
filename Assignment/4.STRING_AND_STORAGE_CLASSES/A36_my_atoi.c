/*
Name        : ISAA KAZI
Date        : 09/02/2023
Description : A36 - WAP to implement atoi function
Sample I/O  : Enter a numeric string: 12345
Sample O/P  : String to integer is 12345
*/
#include <stdio.h>
#include <string.h>

// Function prototype for the written function.
int my_atoi(char str[]);

int main()
{
    // Declaration of datatypes and variables used in this program.
    char str[20];
    printf("Enter a numeric string: ");
    scanf("%s", str);

    // Calling and Printing the ouput of the function
    printf("%d", my_atoi(str));
}

// Defination and declaration of sec_largest function.
int my_atoi(char str[])
{
    // Initialization of datatypes and variables in this function.
    int k = 0;

    // For every character in a string...
    for (int i = 0; str[i] != 0; i++)
    {
        // if the character is between 0 to 9 or first element of string is + or - then excecute if-statement else break.
        if (((str[i] >= 48) && ((str[i]) <= 57)) || (((str[0] == 43) || (str[0] == 45))))
        {
            // if i is greater than zero excecute if statment else else-statement
            if (i > 0)
            {
                // if str is not between 0 to 9 then break
                if (!((str[i] >= 48) && ((str[i]) <= 57)))
                {
                    break;
                }
            }
            else
            {
                // if first element of string is + or - then continue.
                if ((str[0] == 43) || (str[0] == 45))
                {
                    continue;
                }
            }
            // Formula for making string number to integer.
            k = k * 10 + (str[i] - 48);
        }
        else
        {
            break;
        }
    }

    // If the first char of the string is -,then output(k) is negative of the given ouput(k).
    if (str[0] == 45)
    {
        return k = (-k);
    }
    return k;
}