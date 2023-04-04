#include <stdio.h>

int main()
{
    static int fact = 1, num, res = 1, count = 0;

    if (res == 1)
    {
        printf("Enter the value of N : ");
        scanf("%d", &num);

        res++;

        if (num < 0)
        {
            printf("Invalid Input");
        }
    }

    if (num > 0)
    {
        fact = fact * num--;
        main();
    }

    if (num == count)
    {
        printf("Factorial of the given number is %d ", fact);
        count++;
    }
}