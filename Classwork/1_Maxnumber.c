#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the number: ");
    scanf("%d %d",&num1,&num2);
    
    if(num1 > num2)
    {
        printf("num1 is greater than num2.\n");
    }
    else
    {
        printf("num2 is greater than num1.\n");
    }
}
