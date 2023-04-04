#include <stdio.h>

int main()
{
    int num;

    printf("Enter the num: ");
    scanf("%d", &num);

    for (int i = 0; i <= 31; i++)
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