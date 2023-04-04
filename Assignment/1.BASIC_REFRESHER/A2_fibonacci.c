/*
Name        : ISAA KAZI
Date        : 09/01/2023
Description : A2 - WAP to generate positive Fibonacci numbers
Sample I/O  : Enter a number: 40
Sample O/P  : 0 1 1 2 3 5 8 13 21 34
*/

#include <stdio.h>

int main()
{
	// Declaration of integers used in this program
	int num, first = 0, second = 1, next;

	// Printf and scanf are used to take an integer input form the user.
	printf("Enter a number: ");
	scanf("%d", &num);

	// if the number if greater than equal to zero then excecute if-statement  else print Invalid input since input should be only positive number.
	if (num >= 0)
	{
		// The algoruthum for finding fibonacci series.
		while (first <= num)
		{
			printf("%d ", first);
			next = first + second;
			first = second;
			second = next;
		}
	}
	else
	{
		printf("Invalid input");
	}

	printf("\n");
}
