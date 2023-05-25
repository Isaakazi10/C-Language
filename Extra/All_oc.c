#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;

    char str[100];
    char find[20];

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    printf("Enter the Seqence to find: ");
    scanf(" %[^\n]", find);

    for (int i = 0; i < strlen(str); i++)
    {
        int Flag = 0;
        int j = 0;
        if (str[i] == find[j])
        {
            for (j = 0; j < strlen(find); j++)
            {
                if (str[i + j] != find[j])
                {
                    Flag = 0;
                    break;
                }
                Flag = 1;
            }

            if (Flag == 1)
            {
                count++;
            }
        }
    }

    printf("Count: %d", count);
}