#include <stdio.h>

int main()
{
    char c;
    printf("Enter the charaecter or number: ");
    scanf("%c",&c);
    
    if((c >= 'A') && (c <= 'Z'))
    {
        printf("This is uppercase.\n");
    }
    else if((c >= 'a') && (c <= 'z'))
    {
        printf("This is lowercase.\n");
    }
    else if((c >= '0') && (c <= '9'))
    {
        printf("This is digit.\n");
    }
    else
    {
        printf("None.\n");
    }
}
