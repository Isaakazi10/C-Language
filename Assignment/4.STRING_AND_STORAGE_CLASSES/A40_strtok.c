/*
Name        : ISAA KAZI
Date        : 16/02/2023
Description : A40 - WAP to implement strtok functio
Sample I/O  : Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
              Enter string2 : ;./-:
Sample O/P  : Tokens :
              Bangalore
              Chennai
              Kolkata
              Delhi
              Mumbai
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int n = 10;

// Function prototype for the written function.
char *my_strtok(char *str1, char *str2);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    char *token;
    char str1[100];
    char str2[100];

    // Taking input from user.
    printf("Enter string1 : ");
    scanf("%s", str1);
    __fpurge(stdout);

    printf("Enter string2 : ");
    scanf("\n%s", str2);
    __fpurge(stdout);

lable:
    // Function call.
    token = my_strtok(str1, str2);
    printf("Tokens :\n");

    // Calling function till it return NULL.
    while (token != NULL)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, str2);
    }
}

// Defination and declaration of my_strtok function.
char *my_strtok(char *str1, char *str2)
{
    // Declaration of the variable
    static int i, x = 0;
    static char *ptr;
    int all_count = 0;

    // If x is equal to 1 then return NULL.
    if (x == 1)
    {
        return NULL;
    }

    // if i is equal to 0 then base address os str1 is assigned to pointer ptr.
    if (i == 0)
    {
        ptr = str1;
    }

    // For every element in str1 which is equal to str2 the excecute if-statement.
    for (; ptr[i] != 0; i++)
    {
        // initialize variable count to zero.
        int count = 0;
        all_count++;

        for (int j = 0; str2[j] != 0; j++)
        {
            // To check if the next element is not delimiter and if the element is delimiter then count++;
            if (ptr[i + 1] == str2[j])
            {
                count++;
            }
            // if the element of ptr is equal to str2 then asssign null character to ptr element.
            if (ptr[i] == str2[j])
            {
                ptr[i] = 0;
            }
        }

        // The cuurent addreess of ptr string contains 0 character and count is equal to 0 then i++ and break then loop
        if ((ptr[i] == 0) && (count == 0))
        {
            i++;
            break;
        }
    }

    // Element of string ptr is equal to null character then assign 1 to variable x.
    if (ptr[i] == 0)
    {
        x = 1;
    }

    // If the starting string is equal to zero then go to label.
    if (*(ptr + (i - all_count)) == 0)
    {
        goto lable;
    }

    // Returning the address.
    return (ptr + (i - all_count));
}