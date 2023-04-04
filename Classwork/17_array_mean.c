#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size], sum = 0, largest = 0;

    printf("Enter the numbers\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

        sum = sum + arr[i];
    }

    printf("Mean of all entered number: %f\n", (float)sum / size);
}