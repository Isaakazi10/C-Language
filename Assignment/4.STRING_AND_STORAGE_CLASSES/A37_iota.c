/*
Name        : ISAA KAZI
Date        : 09/02/2023
Description : A37 - WAP to implement itoa function
Sample I/O  : Enter the number : -1234
Sample O/P  : Integer to string is -1234
*/
#include <stdio.h>
#include <string.h>

// Function prototype for the written function.
void my_iota(int num, char str[]);

int main()
{
    // Declaration of datatypes and variables used in this program.
    int num;
    char str[100];

    // Taking the input from the user.
    printf("Enter the number : ");
    scanf("%d", &num);

    // Calling of function and Printing the string.
    my_iota(num, str);
    printf("Integer to string is %s", str);
}

// Defination and declaration of sec_largest function.
void my_iota(int num, char str[])
{
    // Initialization of datatypes and variables in this function.
    int k, count = 0, temp = num;

    // If the input is negative number then num is made positive for better manipulation and str[0] is assigned '-' character else count--.
    if (num < 0)
    {
        num = (-num);
        str[count] = 45;
    }
    else
        count--;

    // Storing input num variable in tem variable.
    int tem = num;

    // To find lenght of the given number and that is stored in the count.
    for (; tem != 0;)
    {
        tem = tem / 10;
        count++;
    }

    // Algorithum to converte interger to string
    for (k = 0; num != 0;)
    {
        k = num % 10;
        num = num / 10;
        str[count] = (k + 48);
        count--;
    }

    // if count is less than equal to 0 and 0th element of the string is equal to null then 0th element of string is assigned 0 character.
    if ((count) <= 0 && (str[0] == 0))
        str[0] = 48;
}