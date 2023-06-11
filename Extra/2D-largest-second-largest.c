/*
Name        : ISAA KAZI
Date        : 09/01/2023
Description : 
Sample I/O  : 
Sample O/P  : 

Usage : all unique numbers 
*/

#include <stdio.h>

int main()
{
    int arr[][4] = {4,8,7,10,11,12,1,2,5,7,2,1};
    
    for(int i = 0; i < 3; i++)
    {
        int largest = arr[i][0];
        for(int j=0; j < 4; j++)
        {
            if(largest < arr[i][j])
                largest = arr[i][j];
        }
        
        int s_largest;
        if(largest == arr[i][0])
        {
            s_largest = arr[i][1];
        }
        else
        {
            s_largest = arr[i][0];
        }
        
        for(int j=0; j < 4; j++)
        {
            if(s_largest < arr[i][j] && arr[i][j] < largest)
                s_largest = arr[i][j];
        }
        printf("Row %d : %d %d\n",i, largest , s_largest);
    }
}
