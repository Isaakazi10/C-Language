#include <stdio.h>

int main()
{
    int h = 0;
    
    printf("Enter the height: ");
    scanf("%d", &h);
    
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < (h-i-1); j++)
        {
            printf("  ");
        }
        
        for(int j = (h-i-1); j < h+i; j++) 
        {
            printf("* ");
        }

        
        printf("\n");
    }
}

/*
#include <stdio.h>

int main()
{
    int h = 0;
    
    printf("Enter the height: ");
    scanf("%d", &h);
    
    for(int i = 0; i < h; i++)
    {
        for(int k =0; k < (h-i-1); k++)
        {
            printf("  ");
        }
        
        for(int j = 0-i; j <= i; j++) 
        {
            printf("* ");
        }

        
        printf("\n");
    }
}

*/
