#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; (count != num); i++)
    {
        if (i == 2)
        {
            printf("%d ", i);
            count++;
        }
        for (int d = 2; d < i; d++)
        {
            if ((i % d) > 0)
            {
                if (d == (i - 1))
                {
                    printf("%d ", i);
                    count++;
                }
            }
            else
            {
                break;
            }
        }
    }
}