#include <stdio.h>

int n_bits(int num)
{
    int count = 0;

    for (int i = 0; i < 32; i++)
    {
        if (((1 << i) & num) != 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int num, n;

    printf("Enter the number: ");
    scanf("%d", &num);

    n = n_bits(num);

    printf("n bits of %d is %d", num, n);
}