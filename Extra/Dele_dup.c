#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int Flag = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != 0; i++)
    {
        for (int j = i + 1; str[j] != 0; j++)
        {
            if (str[i] == str[j])
            {
                Flag = 1;
                for (int k = j; k < strlen(str); k++)
                {
                    str[k] = str[k + 1];
                }
            }
            if (str[i] == str[i + 1])
            {
                j--;
            }
        }

        if (Flag == 1)
        {
            for (int k = i; k < strlen(str); k++)
            {
                str[k] = str[k + 1];
            }
        }

        if (str[i] == str[i + 1])
        {
            i--;
        }
    }

    printf("%s", str);
}