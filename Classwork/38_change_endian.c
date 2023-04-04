#include <stdio.h>

int main()
{
    int num, arr[4];

    printf("Enter the number: ");
    scanf("%x", &num);

    for (int i = 0; i < 4; i++)
    {
        arr[i] = (num & (1 << 8) - 1);
        num = (num >> 8);
    }

    for (int i = 0; i < 4; i++)
    {
        num = (arr[i] | num);
        if (i == 3)
        {
            break;
        }
        num = (num << 8);
    }

    printf("%x", num);
}