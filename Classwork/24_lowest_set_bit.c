#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < 32; i++)
    {
        if ((num & (1 << i)) == 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("lowest set bit is = %d", count);
}