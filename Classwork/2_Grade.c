#include <stdio.h>
#include <stdlib.h>

int main()
{
    int per;
    printf("Enter the percentage: ");
    scanf("%i",&per);
    
    while((per >= 0) && (per <= 100))
    {
        if(per > 85)
        {
            printf("Distinction\n");
            exit(0);
        }
        
        else if(per > 80)
        {
            printf("Grade A\n");
            exit(0);
        }
        
        else if(per > 70)
        {
            printf("Grade B\n");
            exit(0);
        }
        
        else if(per > 60)
        {
            printf("Grade C\n");
            exit(0);
        }
        
        else if(per > 50)
        {
            printf("Grade D\n");
            exit(0);
        }
        
        else
        {
            printf("Fail\n");
            exit(0);
        }
    }
}

