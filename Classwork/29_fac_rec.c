#include <stdio.h>

int Fib(int num)
{
    if (num < 1)
        return 1;
    else
    {
        return num * Fib(num - 1);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonnaci of %d: %d", num, Fib(num));
}