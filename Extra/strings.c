#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the character: ");
    scanf("%[^\n]", str1);

    printf("Enter the character: ");
    scanf(" %[^\n]", str2);

    for (int i = 0; (i < strlen(str1)) || (i < strlen(str2)); i++)
    {
        if (tolower(str1[i]) != tolower(str2[i]))
        {
            printf("Strings are not equal.");
            return 0;
        }
    }

    printf("Strings are equal. ");
}