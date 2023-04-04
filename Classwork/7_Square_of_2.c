#include <stdio.h>

int main()
{
    int n,sum=1;
    printf("Enter the number of iteration");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        sum=2*sum;
        printf("%d\n",sum);
    }
}
