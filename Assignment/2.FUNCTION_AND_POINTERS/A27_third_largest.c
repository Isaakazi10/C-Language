/*
Name        : ISAA KAZI
Date        : 06/02/2023
Description : A27 - WAP to find 3rd largest element in an array
Sample I/O  : Enter the size of the Array : 5
              Enter the elements into the array: 5 1 4 2 8
Sample O/P  : Third largest element of the array is 4
*/
#include <stdio.h>

// Function prototype for the written function.
int third_largest(int size, int *arr);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int size;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the size of the Array : ");
    scanf("%d", &size);

    // Declaration of array.
    int arr[size];

    // Giving inputs to array by using for loop.
    printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calling of function and print the return value.
    printf("Third largest element of the array is %d", third_largest(size, arr));
}

// Defination and declaration of third_largest function.
int third_largest(int size, int *arr)
{
    // Declaration of datatypes and variables used in this function.
    int largest = *(arr + 0), second_largest = 0, third_largest;

    // Algorithum to find third largest number in the array.
    for (int j = 0; j <= 2; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if ((j == 0) && (largest < *(arr + i)))
            {
                largest = *(arr + i);
            }
            if ((j == 1) && (*(arr + i) < largest) && (*(arr + i) > second_largest))
            {
                second_largest = *(arr + i);
            }
            if ((j == 2) && (*(arr + i) < largest) && (*(arr + i) < second_largest) && (*(arr + i) > third_largest))
            {
                third_largest = *(arr + i);
            }
        }
    }
    return third_largest;
}