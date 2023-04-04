#include <stdio.h>

int main()
{
    int size, ecount = 0, ocount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter the numbers:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);

        (a[i] % 2 == 0) ? ecount++ : ocount++;
    }

    printf("Count of odd numbers: %d\n", ocount);
    printf("Count of even numbers: %d\n", ecount);
}