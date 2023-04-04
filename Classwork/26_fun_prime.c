#include <stdio.h>

int prime(int num)
{
    if ((num % 2) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (prime(num))
    {
        printf("%d is ODD", num);
    }
    else
    {
        printf("%d is EVEN", num);
    }
}