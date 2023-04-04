#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 10;
    const char *s = &a;
    const char *p = s;
    while (*++s)
        ;
    printf("%d", (p - s));
}