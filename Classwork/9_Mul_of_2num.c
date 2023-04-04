#include <stdio.h>

int main()
{
    int num1,num2,smallest,largest,sum=0;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    
    if(num1 > num2)
    {
        largest=num1;
        smallest=num2;
    }
    else
    {
        largest=num1;
        smallest=num2;
    }
    
    for(int i=0;i<smallest;i++)
    {
        sum=sum+largest;
    }
    
    printf("%d\n",sum);
    
}
