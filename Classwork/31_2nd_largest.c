#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three num: ");
    scanf("%d %d %d", &a, &b, &c);

    ((((a > b) && (a < c)) || ((b > c) && (a < b)))) ? printf("a\n") : ((((b > a) && (b < c)) || ((b > c) && (b < a))) ? printf("b\n") : printf("c\n"));
}