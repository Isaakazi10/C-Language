#include <stdio.h>

int main()
{
    int num,rev=0,temp=0,n;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    temp=num;
    
    while(temp!=0)
    {
        n=temp%10;
        rev=rev*10+n;
        temp=temp/10;
    }
    
    
    if(rev==num)
    {
        printf("palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
    
}
