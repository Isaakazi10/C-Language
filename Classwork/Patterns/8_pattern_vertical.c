#include <stdio.h>

int main()
{
    int num, extra;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int count = 0;

        for (int j = 1; j <= num; j++)
        {

            if (j % 2 == 1)
            {
                if (j == 1)
                {
                    printf("%d ", i);
                }
                else
                {
                    extra = i - 1;
                    count = count + i + extra;
                    printf("%d ", count);
                    count = count - extra;
                }
            }
            else
            {
                count = num * j - i + 1;
                printf("%d ", count);
            }
        }
        printf("\n");
    }
}