/*
Name        : ISAA KAZI
Date        : 07/02/2023
Description : A32 - Print the values in sorted order without modifying or copying array
Sample I/O  : Enter the size : 5
              Enter 5 elements
              10 1 3  8 -1
Sample O/P  : After sorting: -1 1 3 8 10
              Original array values 10 1 3 8 -1
*/
#include <stdio.h>

// Function prototype for the written function.
int *sort_array(int size, int arr[], int *smallest, int largest, int k);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int size;

    // Printf and scanf are used to take an integer input form the user.
    printf("Enter the size : ");
    scanf("%d", &size);

    // Declaration of array.
    int arr[size];

    // Giving inputs to array by using for loop.
    printf("Enter 5 elements");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Declaration of datatytes and variables used in main as well as sort array function.
    int largest = arr[0], smallest = arr[0];

    // Algorithum to find largest of the array.
    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    // Calling of function and print the return value for sorting the array
    printf("After sorting:");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", *(sort_array(size, arr, &smallest, largest, i)));
    }

    printf("\n");

    // Printing the original array
    printf("Original array values");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}

// Defination and declaration of sec_largest function.
int *sort_array(int size, int arr[], int *smallest, int largest, int k)
{
    // Declaration of datatypes and variables used in this function.
    int temp = largest;

    // Algorithum for sorting the array without modifying it.
    for (int i = 0; i < size; i++)
    {
        if ((k == 0) && (temp > arr[i]))
        {
            temp = arr[i];
        }

        if ((k >= 1) && (arr[i] > *smallest) && (temp > arr[i]))
        {
            temp = arr[i];
        }
    }

    *smallest = temp;

    return smallest;
}