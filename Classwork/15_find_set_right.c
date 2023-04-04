#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 0; i <= 31; i++)
    {
        if ((((num >> i) & 1) != 0))
        {
            count++;
        }
    }
    printf("%d", count);
}