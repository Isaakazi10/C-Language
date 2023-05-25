#include <stdio.h>

int main()
{
    int num;
    scanf("%x", &num);

    printf("%d ", num);

    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num & (1 << i)) >> i);
    }
}