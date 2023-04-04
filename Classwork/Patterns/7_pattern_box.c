#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= (num * 2 - 1); i++)
    {
        int count = num;
        for (int j = 1; j <= (num * 2 - 1); j++)
        {
            printf("%d ", count);

            if (count == 1)
            {
                count = 2;
            }

            if (i <= num && j <= num)
            {
                if (j < i)
                {
                    count = count - 1;
                }
            }

            else if (i <= num && j > num)
            {
                if (j > (num * 2 - 1 - i))
                {
                    count = count + 1;
                }
            }

            else if (i > num && j <= num)
            {
                if (j < (num * 2 - i))
                {
                    count = count - 1;
                }
            }

            else if (i > num && j > num)
            {
                if (j >= i)
                {
                    count = count + 1;
                }
            }
        }
        printf("\n");
    }
}