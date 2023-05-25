#include <stdio.h>
#include <string.h>

void rev_rec(char *arr, int start, int size);

int main()
{
    char arr[100];

    printf("Enter the string: ");
    scanf("%[^\n]", arr);

    rev_rec(arr, 0, strlen(arr));

    printf("%s", arr);
}

void rev_rec(char *arr, int start, int size)
{
    if (start == (size / 2))
    {
        return;
    }

    char temp = arr[(size - 1) - start];
    arr[(size - 1) - start] = arr[start];
    arr[start] = temp;

    start++;
    rev_rec(arr, start, size);
}