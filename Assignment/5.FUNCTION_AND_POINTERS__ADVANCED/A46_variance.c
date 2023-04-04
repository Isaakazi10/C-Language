/*
Name        : ISAA KAZI
Date        : 28/02/2023
Description : A46 - Variance calculation with dynamic arrays
Sample I/O  : Enter the no.of elements : 10
              Enter the 10 elements:
              [0] -> 9
              [1] -> 12
              [2] -> 15
              [3] -> 18
              [4] -> 20
              [5] -> 22
              [6] -> 23
              [7] -> 24
              [8] -> 26
              [9] -> 31
Sample O/P  : Variance is 40.000000
*/

#include <stdio.h>
#include <stdlib.h>

// Function prototype for the written function.
float my_var(int *ptr, int size);

int main()
{
    // Declaration of datatypes and variables used in this main function.
    int size;

    // Taking input from user.
    printf("Enter the no.of elements : ");
    scanf("%d", &size);

    // Declaration of heap array
    int *ptr = malloc(size * sizeof(int));

    // Calling and printing the funtions return value.
    printf("Variance is %f", my_var(ptr, size));
}

// Defination and declaration of my_var function.
float my_var(int *ptr, int size)
{
    // Initialization and declaration of variables used in this function.
    int sum = 0;
    float D_sqr;

    // To assign values to the array and finding the mean of the array.
    for (int i = 0; i < size; i++)
    {
        printf("[%d] -> ", i);
        scanf(" %d", &ptr[i]);
        sum = sum + ptr[i];
    }
    int mean = (sum / size);

    // Algorithum to find varience of the array and return the value of the the varience.
    for (int i = 0; i < size; i++)
    {
        ptr[i] = (ptr[i] - mean);
        ptr[i] = (ptr[i] * ptr[i]);
        D_sqr = D_sqr + ptr[i];
    }
    return (D_sqr / size);
}