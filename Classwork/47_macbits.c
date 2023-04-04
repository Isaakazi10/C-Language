#include <stdio.h>

#define BIT(num) ((num >> 16) | (num & (0xFFFF)) << 16)

int main()
{
    int num;

    printf("Enter a number in hex: ");
    scanf("%x", &num);

    printf("%x", BIT(num));
}