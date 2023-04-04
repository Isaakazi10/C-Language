#include <stdio.h>

int main()
{
    int num = 0x12345678;

    char *ptr = (char *)&num;

    printf("%x\n", *ptr);

    if (*ptr == 0x78)
    {
        printf("Little Endian");
    }
    else
    {
        printf("Big Endian");
    }
}