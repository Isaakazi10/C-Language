#include <stdio.h>

int main()
{
    int height,space;

    printf("Enter the height: ");
    scanf("%d",&height);

    for(int i=0; i < height; i++)
    {
        space=(height-i-1);
        /*for(int j=0; j<space; j++)
        {
            printf("  ");
        }*/

        for(int j=0; j<(height+space+1); j++)
        {
            if(j < space)
            {
                printf("  ");
            }
            
            if(j > space)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}