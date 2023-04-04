#include <stdio.h>

#define GET(num, bit) (num & (1 << bit))

#define SET(num, bit) (num | (1 << bit))

#define CLEAR(num, bit) (num & ~(1 << bit))

int main()
{
    int num, bit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the nth bit: ");
    scanf("%d", &bit);

    int get = GET(num, bit);
    printf("%d\n", get);

    int set = SET(num, bit);
    printf("%d\n", set);

    int clear = CLEAR(num, bit);
    printf("%d\n", clear);
}