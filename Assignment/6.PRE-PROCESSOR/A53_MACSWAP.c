/*
Name        : ISAA KAZI
Date        : 14/03/2023
Description : A53 - WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
Sample I/O  : 1. Int
              2. char
              3. short
              4. float
              5. double
              6. string
              Enter you choice : 1

              Enter the num1 : 10
              Enter the num2 : 20
Sample O/P  : After Swapping :
              num1 : 20
              num2 : 10
*/

#include <stdio.h>
#include <stdlib.h>

// Defination of MACRO
#define SWAP(t, a, b) \
    {                 \
        t temp = a;   \
        a = b;        \
        b = temp;     \
    }

int main()
{
    // Declaration of the variable.
    int x, num1, num2;
    char a, b;
    short snum1, snum2;
    float fnum1, fnum2;
    double dnum1, dnum2;
    char *str1 = (char *)malloc(30 * sizeof(char)), *str2 = (char *)malloc(20 * sizeof(char));

    // Taking input from user for switch case.
    printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\nEnter you choice : ");
    scanf("%d", &x);

    // Switch case for swap of varibles using macros.
    switch (x)
    {
    case 1:
        printf("\nEnter the num1 : ");
        scanf("%d", &num1);
        printf("Enter the num2 : ");
        scanf("%d", &num2);
        SWAP(int, num1, num2);
        printf("\nAfter Swapping :\nnum1 : %d\nnum2 : %d", num1, num2);
        break;

    case 2:
        printf("\nEnter the char1 : ");
        scanf(" %c", &a);
        printf("Enter the char2 : ");
        scanf(" %c", &b);
        SWAP(char, a, b);
        printf("\nAfter Swapping :\nchar1 : %c\nchar2 : %c", a, b);
        break;

    case 3:
        printf("\nEnter the num1 : ");
        scanf("%hd", &snum1);
        printf("Enter the num2 : ");
        scanf("%hd", &snum2);
        SWAP(short, snum1, snum2);
        printf("\nAfter Swapping :\nnum1 : %hd\nnum2 : %hd", snum1, snum2);
        break;

    case 4:
        printf("\nEnter the num1 : ");
        scanf("%f", &fnum1);
        printf("Enter the num2 : ");
        scanf("%f", &fnum2);
        SWAP(float, fnum1, fnum2);
        printf("\nAfter Swapping :\nnum1 : %f\nnum2 : %f", fnum1, fnum2);
        break;

    case 5:
        printf("\nEnter the num1 : ");
        scanf("%lf", &dnum1);
        printf("Enter the num2 : ");
        scanf("%lf", &dnum2);
        SWAP(double, dnum1, dnum2);
        printf("\nAfter Swapping :\nnum1 : %lf\nnum2 : %lf", dnum1, dnum2);
        break;

    case 6:
        printf("\nEnter the str1 : ");
        scanf(" %[^\n]", str1);
        printf("Enter the str2 : ");
        scanf(" %[^\n]", str2);
        SWAP(char *, str1, str2);
        printf("\nAfter Swapping :\nstr1 : %s\nstr2 : %s", str1, str2);
        break;

    default:
        printf("Enter proper number(1-6)");
        break;
    }
    free(str1);
    free(str2);
}