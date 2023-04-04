#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 31; i >= 0; i--)
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
    printf("Highest set bit is = %d", 31 - count);
}