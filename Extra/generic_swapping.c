// Online C compiler to run C program online
#include <stdio.h>

void swap(void *a, void *b, int size)
{
    char temp[size];
    memcpy(temp, a,size);
    memcpy(a,b,size);
    memcpy(b,temp,size);
}

int main() 
{
    int a =10, b= 20;
    swap(&a,&b ,sizeof(int));
    char str[10] = "World";
    char str1[10] = "Hello ";
    
    swap(str,str1 ,sizeof(str));
    
    printf("%s",str);
    printf("%s",str1);
}
