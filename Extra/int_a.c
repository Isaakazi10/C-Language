/*
Name        : ISAA KAZI
Date        : 09/01/2023
Description : 
Sample I/O  : 
Sample O/P  : 
*/

#include <stdio.h>

int main()
{
    int size=0, s=0, count=0, Flag =0;
    
    printf("Enter the size: ");
    scanf("%d", &size);
    
    printf("Enter the size of sub-array");
    scanf("%d", &s);
    
    int marr[size];
    int sarr[s];

    for(int i =0; i < size;i++)
    {
        scanf("%d" , &marr[i]);
    }
    
    for(int i =0; i < s;i++)
    {
        scanf("%d", &sarr[i]);
    }
    
    int i;
    for(i=0;i < size; i++)
    {
        count = 0;
        int temp = i;
        
        for(int j = 0; j < s; j++)
        {
            if(marr[temp++] == sarr[j])
            {
                if(++count == s)
                {
                    Flag = 1;
                    break;
                }
            }
        }
        if(Flag == 1)
            {
             break;
		}
    }
    
    if(Flag == 1)
    {
        printf("Found %i", i);
    }
    else
    {
        printf("Not found");
    }
    
    return 0;
}

