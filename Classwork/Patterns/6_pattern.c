
/*
Name        : ISAA KAZI
Date        : 09/01/2023
Description :
Sample I/O  :
Sample O/P  :
*/

#include <stdio.h>

int main()
{
    int hei;

    printf("Enter the Height: ");
    scanf("%d", &hei);

    for (int i = 1; i <= hei; i++)
    {
        for (int j = 1; j <= (hei - i + 1); j++)
        {
            if ((i % 2) == 1 || i == 1)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", (hei - j - i + 2));
            }
        }
        printf("\n");
    }
}