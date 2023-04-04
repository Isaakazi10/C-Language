#include <stdio.h>

int main()
{
    int num,n,sum=1;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of iteration: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        sum=num*sum;
        printf("%d\n",sum);
    }
}
