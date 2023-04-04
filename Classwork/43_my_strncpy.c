#include <stdio.h>
#include <string.h>

int *my_strcmp(char str1[], char str2[], int k);

int main()
{
    int i;
    char *str1 = "Hello";

    char str2[strlen(str1)];

    printf("Enter the number of letters u want to copy: ");
    scanf("%d", &i);

    my_strcmp(str1, str2, i);

    printf("%s", str2);
}

int *my_strcmp(char str1[], char str2[], int k)
{
    for (int i = 0; i < k; i++)
    {
        str2[i] = str1[i];
    }
}