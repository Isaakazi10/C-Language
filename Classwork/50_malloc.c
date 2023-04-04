#include <stdio.h>
#include <stdlib.h>

char *my_dup(char *str);

int main()
{
    char str[500];

    printf("Give a string: ");
    scanf("%[^\n]", str);

    char *ptr = my_dup(str);

    printf("%s", ptr);
}

char *my_dup(char *str)
{
    int len = 0;

    for (int i = 0; str[i] != 0; i++)
    {
        len++;
    }

    char *ptr = malloc(len * sizeof(char));

    for (int i = 0; str[i] != 0; i++)
    {
        ptr[i] = str[i];
    }

    return ptr;
}