#include <stdio.h>

int main()
{
    char a, b;

    printf("Enter two character: ");
    scanf("%c %c", &a, &b);

    a = (a ^ b);
    b = (a ^ b);
    a = (a ^ b);

    printf("%c ", a);
    printf("%c", b);
}