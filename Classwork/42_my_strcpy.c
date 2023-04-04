#include <stdio.h>

int *my_strcmp(char str1[], char str2[]);

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the string: ");
    scanf("%[^\n]", str1);

    my_strcmp(str1, str2);

    printf("%s", str2);
}

int *my_strcmp(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != 0; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = 0;
}

/*int *my_strcmp(char str1[], char str2[])
{
    int count = 0;
    while (*(str2++) = *(str1++))
    {
        printf("%d ", ++count);
    }
}*/