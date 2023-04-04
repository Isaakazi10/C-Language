#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,space;

    printf("Enter the height(only odd numbers): ");
    scanf("%d",&height);

    while(height%2==1)
    {
        for(int i=1; i <= ((height/2)+3); i++)
        {
            if(i==1 || i==((height/2)+3))
            {
                for(int j=1; j<=height; j++)
                {
                    printf("* ");
                }
            }

            else
            {
                for(int j=1; j<height; j++)
                {
                    if(j==1 || j==((height/2)+1))
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
        exit(0);
    }
}