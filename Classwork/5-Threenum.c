#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if(((num1 < num2) && (num1 > num3)) || ((num1 < num3) && (num1 > num2)))
    {
        printf("num1 is middle number\n");
    }
    
    else if(((num2 < num1) && (num2 > num3)) || ((num2 < num3) && (num2 > num1)))
    {
    	printf("num2 is middle number\n");
    }
    
    else
    {
    	printf("num3 is middle number\n");
    }
}
