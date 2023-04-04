#include <stdio.h>

void my_strcat(char str1[], char str2[]);
char str1[100] = {"s ;sfkgs'd; 'sl;dkf g'sdfl;kg' sdl"};

int main()
{
    // char str2[100];
    char *str2 = "Zuhair";

    printf("Enter the string1: ");
    scanf("%[^\n]", str1);

    /*printf("Enter the string2: ");
    scanf(" %[^\n]", str2);*/

    my_strcat(str1, str2);

    printf("%s", str1);
}

void my_strcat(char str1[], char str2[])
{
    int i, j;
    for (i = 0; str1[i] != 0; i++)
        ;

    for (j = 0; str2[j] != i; j++)
    {
        str1[j + i] = str2[j];
    }
    // str1[j] = 0;
}

/*void my_strcat(char sstr1[], char sstr2[])
{
    int count = 0;
    while (*sstr1++)
        ;
    sstr1--;
    while (*sstr1++ = *sstr2++)
    {
        // printf("%d", ++count);
    }
    count = 0;
}*/