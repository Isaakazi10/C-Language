#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("\n");

    for (int i = 0; i <= num; i++)
    {
        if (i > 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
        }

        for (int j = 0; j < num; j++)
        {
            if ((num - i - j) >= 1)
            {
                printf("%d", num - i - j);
            }
        }

        printf("\n");
    }
}