#include <stdio.h>

int main()
{
    int num;
    long long fib = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--)
    {
        fib = fib * i;
        printf("%llu ", fib);
    }
}