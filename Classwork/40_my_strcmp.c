#include <stdio.h>
#include <string.h>

int my_strcmp(char str1[], char str2[]);

int main()
{
    char *str1 = "Hello";

    char *str2 = "Hello";

    if (my_strcmp(str1, str2))
    {
        printf("Not Equal");
    }
    else
    {
        printf("Equal");
    }
}

int my_strcmp(char str1[], char str2[])
{
    if (strlen(str1) == strlen(str2))
    {
        for (int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
            {
                return 1;
            }
            else
            {
                if (i == strlen(str1))
                    return 0;
            }
        }
    }
    else
    {
        return 1;
    }
}