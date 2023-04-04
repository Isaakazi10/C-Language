#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, total;

    printf("Enter the number: ");
    scanf("%d %d", &num1, &num2);

    total = num1 * num2;

    for (int i = 1; i <= total; i++)
    {
        for (int j = 1; j <= total; j++)
        {
            if ((num1 * i) == (num2 * j))
            {
                printf("LCM vales are %d %d", num1 * i, num2 * j);
                exit(0);
            }
        }
    }
}