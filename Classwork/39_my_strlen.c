#include <stdio.h>

int my_strlen(char str[]);

int main()
{
    char str[20] = "How do u do";

    for (int i = 0; i < 12; i++)
    {
        printf("%d ", str[i]);
    }

    printf("\nThe lenght of the string is %d\n", my_strlen(str));
}

int my_strlen(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}