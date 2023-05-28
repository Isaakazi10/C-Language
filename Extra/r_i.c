#include <stdio.h>
#include <string.h>

int check(char ro);
int r_i(char a, char b, int *Flag);

int main()
{
    int sum = 0;
    char str[15];
    int Flag = 0;

    printf("Enter the Roman string: ");
    scanf("%s", str);

    for (int i = (strlen(str) - 1); i >= 0; i--)
    {
        if (Flag == 1)
        {
            Flag = 0;
            continue;
        }

        char var2;
        if ((i - 1) < 0)
        {
            var2 = 0;
        }
        else
        {
            var2 = str[i - 1];
        }
        sum = sum + r_i(str[i], var2, &Flag);
    }

    printf("Sum %d", sum);
}

int r_i(char a, char b, int *Flag)
{
    int var1 = 0, var2 = 0;

    var1 = check(a);
    var2 = check(b);

    if (var1 > var2)
    {
        *Flag = 1;
        return var1 - var2;
    }
    else
    {
        return var1;
    }
}

int check(char ro)
{
    switch (ro)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return 0;
    }
}