/*
Name        : ISAA KAZI
Date        : 14/03/2023
Description : A52 - WAP to define a macro SIZEOF(x), without using sizeof operator
Sample I/O  :
Sample O/P  : Size of int : 4 bytes
              Size of char : 1 byte
              Size of float : 4 bytes
              Size of double : 8 bytes
              Size of unsigned int : 4 bytes
              Size of long int : 8 bytes
              ----
              ----
              ----
*/

#include <stdio.h>

// Defination of MACRO
#define SIZEOF(x) (((char *)(&x + 1)) - ((char *)(&x)))

int main()
{
    // Declaration of the variable.
    char a;
    // Getting its size using MACRO
    printf("Size of char: %zu bytes\n", SIZEOF(a));

    short b;
    printf("Size of short: %zu bytes\n", SIZEOF(b));

    int c;
    printf("Size of int: %zu bytes\n", SIZEOF(c));

    float d;
    printf("Size of float: %zu bytes\n", SIZEOF(d));

    double e;
    printf("Size of double: %zu bytes\n", SIZEOF(e));

    unsigned int f;
    printf("Size of unsigned int: %zu bytes\n", SIZEOF(f));

    long int g;
    printf("Size of long int: %zu bytes\n", SIZEOF(g));

    long long int h;
    printf("Size of long long int: %zu bytes\n", SIZEOF(h));

    long double i;
    printf("Size of long double: %zu bytes\n", SIZEOF(i));

    unsigned long j;
    printf("Size of unsigned long: %zu bytes\n", SIZEOF(j));
}