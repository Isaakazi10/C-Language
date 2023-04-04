#include <stdio.h>

int main()
{
    int num;

    printf("Enter the num: ");
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--)
    {
        if (num & (1 << i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }

    printf("\n");

    for (int i = 31; i >= 0; i--)
    {
        if (num & (1 << i))
        {
            num = (num & ~(1 << i));
        }
        else
        {
            num = (num | (1 << i));
        }
    }

    for (int i = 31; i >= 0; i--)
    {
        if (num & (1 << i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}