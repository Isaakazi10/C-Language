#include <stdio.h>

int main()
{
    char *str1 = "HEllo";
    char *str2 = "hEllso";

    int i = 0, Flag = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if ((str1[i] - str2[i] != 32) && str1[i] - str2[i] != 0 && str1[i] - str2[i] != -32)
        {
            Flag = 1;
            break;
        }
        i++;
    }

    if (Flag == 1)
    {
        printf("Not equal");
    }
    else
    {
        printf("Equal");
    }
}
