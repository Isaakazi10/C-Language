#include <stdio.h>

int main()
{
    int height,space;

    printf("Enter the height: ");
    scanf("%d",&height);

    for(int i=0; i < height; i++)
    {
        space=(height-i-1);
        for(int j=0; j<space; j++)
        {
            printf("  ");
        }

        for(int j=0; j<((i*2)+1); j++)
        {
            printf("* ");
        }

        if(i == (height-1))
        {
            printf("\n");

            for(int k=0; k < (height-1); k++)
            {
                for(int j=0; j<=k; j++)
                {
                    printf("  ");
                }

                for(int j=0; j<(((height-k)*2)-3); j++)
                {
                    printf("* ");
                }

                printf("\n");
            }
        }
        printf("\n");
    }
}