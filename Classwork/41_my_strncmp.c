#include <stdio.h>
#include <string.h>

int my_strcmp(char str1[], char str2[], int k);

int main()
{
    char *str1 = "Hello";
    char *str2 = "Helloworld";
    int i;

    printf("Enter the number of the character you want to compare:");
    scanf("%d", &i);

    if (my_strcmp(str1, str2, i))
    {
        printf("Not Equal");
    }
    else
    {
        printf("Equal");
    }
}

int my_strcmp(char str1[], char str2[], int k)
{
    if ((k <= strlen(str1)) && (k <= strlen(str2)))
    {
        for (int i = 0; i < k; i++)
        {
            if (str1[i] != str2[i])
            {
                return 1;
            }
            else
            {
                if (i == (k - 1))
                    return 0;
            }
        }
    }
    else
    {
        return 1;
    }
}