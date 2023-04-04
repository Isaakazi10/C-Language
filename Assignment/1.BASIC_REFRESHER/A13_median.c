/*
Name        : ISAA KAZI
Date        : 09/01/2023
Description : A13 - WAP to find the median of two unsorted arrays
Sample I/O  : Enter the 'n' value for Array A: 5
			  Enter the 'n' value for Array B: 5

			  Enter the elements one by one for Array A: 3 2 8 5 4
			  Enter the elements one by one for Array B: 12 3 7 8 5

Sample O/P  : Median of array1 : 4
			  Median of array2 : 7

			  Median of both arrays : 5.5
*/

#include <stdio.h>

int main()
{
	// Declaration of datatypes used in this program
	int size1, size2, temp;
	float med1, med2;

	// Printf and scanf are used to take an size of arrays form the user.
	printf("Enter the 'n' value for Array A: ");
	scanf("%d", &size1);

	printf("Enter the 'n' value for Array B: ");
	scanf("%d", &size2);

	// Syntax declare an arrays.
	int arr1[size1], arr2[size2];

	// Using loop to give input to an array.
	printf("Enter the elements one by one for Array A: ");
	for (int i = 0; i < size1; i++)
	{
		scanf("%d", &arr1[i]);
	}

	printf("Enter the elements one by one for Array B: ");
	for (int i = 0; i < size2; i++)
	{
		scanf("%d", &arr2[i]);
	}

	// Using Bubble sort algorithum to sort the arrays.
	for (int i = 0; i < (size1 - 1); i++)
	{
		for (int j = 0; j < (size1 - i - 1); j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < (size2 - 1); i++)
	{
		for (int j = 0; j < (size2 - i - 1); j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}

	// If the array size is odd then the median is in index of half of array size else if add middle two numbers of array then take average of the two to get the median.
	if ((size1 % 2) == 1)
	{
		med1 = arr1[(size1 / 2)];
	}
	else
	{
		med1 = (arr1[(size1 / 2)] + arr1[((size1 / 2) - 1)]) / (float)2;
	}

	if ((size2 % 2) == 1)
	{
		med2 = arr2[(size2 / 2)];
	}
	else
	{
		med2 = (arr2[(size2 / 2)] + arr2[((size2 / 2) - 1)]) / (float)2;
	}

	printf("Median of array1 : %g\n", med1);

	printf("Median of array2 : %g\n", med2);

	printf("Median of both arrays : %g", ((med1 + med2) / (float)2));
}