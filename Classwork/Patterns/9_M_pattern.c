#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= (num * 2); j++)
        {
            if (j <= num)
            {
                if ((j > num - i + 1))
                {
                    printf("  ");
                }
                else
                {
                    printf("%d ", j);
                }
            }
            else
            {
                if (j < num + i)
                {
                    printf("  ");
                }
                else
                {
                    printf("%d ", ((num * 2) - j + 1));
                }
            }
        }
        printf("\n");
    }
}