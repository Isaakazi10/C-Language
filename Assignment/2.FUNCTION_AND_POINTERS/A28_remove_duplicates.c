/*
Name        : ISAA KAZI
Date        : 07/02/2023
Description : A28 - WAP to remove duplicate elements in a given array
Sample I/O  : Enter the size: 5
              Enter elements into the array: 2 1 1 1 5
Sample O/P  : After removing duplicates: 2 1 5
*/
#include <stdio.h>

// Function prototype for the written function.
int rem_dup(int size, int arr1[], int arr2[], int *count);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int size, count = 1;

    // Input from the user.
    printf("Enter the size: ");
    scanf("%d", &size);

    // Declaration of array.
    int arr1[size], arr2[size];

    // Giving inputs to array by using for loop.
    printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Calling of function.
    rem_dup(size, arr1, arr2, &count);

    // Output of the rem_dup function.
    printf("After removing duplicates: ");
    for (int i = 0; i <= (count - 1); i++)
    {
        printf("%d ", arr2[i]);
    }
}

// Defination and declaration of sec_largest function.
int rem_dup(int size, int arr1[], int arr2[], int *count)
{
    // First element of array will be assigned to another array because there is be no comparision
    arr2[0] = arr1[0];

    // Algorithum to find duplicate number in the array.
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // If the elements are same then break else assign the element to another array and increase count by 1.
            if (arr1[i] == arr1[j])
            {
                break;
            }
            else
            {
                // if j is equal to (i-1) then excecute if-statement.
                if (j == (i - 1))
                {
                    arr2[*count] = arr1[i];
                    (*count)++;
                }
            }
        }
    }
}