#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Upper limit: ");
    scanf("%d", &num);

    if (num < 1)
    {
        printf("Only Natural NUmbers");
        return 1;
    }

    for (int i = 1; i <= num; i = i + 2)
    {
        sum = sum + i;
    }

    printf("%d", sum);
}