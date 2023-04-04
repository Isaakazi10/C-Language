/*
Name        : ISAA KAZI
Date        : 07/03/2023
Description : A47 - WAP to convert Little Endian data to Big Endian
Sample I/O  : Enter the size: 2
              Enter any number in Hexadecimal: ABCD
Sample O/P  : After conversion CDAB
*/

#include <stdio.h>
int main()
{
    // Declaration of datatypes and variables used in this main function.
    int num, size, temp;
    short snum;
    char *ptr;

    // Geting inputs from the user
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter any number in Hexadecimal:");

    // if the size is equal to 2then excecute if-condition else else-condition.
    if (size == 2)
    {
        scanf("%hx", &snum);
        ptr = (char *)&snum;

        // Algorithum to swap the numbers.
        temp = *ptr;
        *ptr = *(ptr + 1);
        *(ptr + 1) = temp;

        // printing the output
        printf("After conversion %hx", snum);
    }
    else
    {
        scanf("%x", &num);
        ptr = (char *)&num;

        // Algorithum to swap the numbers.
        for (int i = 0; i < (size / 2); i++)
        {
            temp = *(ptr + i);
            *(ptr + i) = *(ptr + size - i - 1);
            *(ptr + size - i - 1) = temp;
        }

        // printing the output.
        printf("After conversion %x", num);
    }
}