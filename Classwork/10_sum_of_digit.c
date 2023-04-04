#include <stdio.h>

int main()
{
    int num,rem=0;

    printf("Enter the digit: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=rem+(num%10);
        num=(num/10);
    }

    printf("sum:%d\n",rem);
}