#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len, tem = 0, median = 0;
    printf("Give any length: ");
    scanf("%d", &len);

    int *ptr = malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < (len - 1); i++)
    {
        for (int j = 0; j < (len - i - 1); j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                tem = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = tem;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d", ptr[i]);
    }

    if (len % 2 == 0)
    {
        median = ((ptr[len / 2] + ptr[(len / 2) - 1]) / 2);
    }
    else
    {
        median = ptr[(len / 2)];
    }

    printf("%d", median);
}