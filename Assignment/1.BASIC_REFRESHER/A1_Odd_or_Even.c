/*
Name        : ISAA KAZI
Date        : 09/01/2023
Description : A1 - WAP to check if number is odd or even
Sample I/O  : Enter the value of 'n' : -2
Sample O/P  : -2 is negative even number
*/

#include <stdio.h>

int main(void)
{
	// Declaration of datatypes used in this program
	int num;

	// Printf and scanf are used to take an integer input form the user.
	printf("Enter the value of 'n' :");
	scanf("%d", &num);

	// If the number stored in the variable is equal to zero then excecute below statement and then exit.
	if (num == 0)
	{
		printf("0 is neither odd nor even\n");
		return 0;
	}

	// if the number is greater than 0 then the user input is positive (Go inside if-loop) else negative (Go inside else-loop)
	if (num >= 0)
	{
		// If num%2 is equal to zero then it is positive even number else it is positive odd number.
		if (num % 2 == 0)
		{
			printf("%d is positive even number\n", num);
		}
		else
		{
			printf("%d is positive odd number\n", num);
		}
	}
	else
	{
		// If num%2 is equal to zero then it is negative even number else it is negative odd number.

		if (num % 2 == 0)
		{
			printf("%d is negative even number\n", num);
		}
		else
		{
			printf("%d is negative odd number\n", num);
		}
	}
}
