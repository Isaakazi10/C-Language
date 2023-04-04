/*
Name        : ISAA KAZI
Date        : 10/01/2023
Description : A2 - WAP to generate negative Fibonacci numbers
Sample I/O  : Enter a number:-8
Sample O/P  : 0 1 -1 2 -3 5 -8
*/

#include <stdio.h>

int main()
{
	// Declaration of datatypes used in this program
	int num, first = 0, second = 1, next, neg_num = 0;

	// Printf and scanf are used to take an negative integer input form the user.
	printf("Enter a number: ");
	scanf("%d", &num);

	// if the number if lesser than equal to zero then excecute if-statement  else print Invalid input since input should be only negative number.
	if (num <= 0)
	{
		// The code/Algorithum for finding negative fibonacci series.
		while (neg_num >= num)
		{
			printf("%d ", first);
			next = first - second;
			first = second;
			second = next;

			// In negative series there are positive numbers as well as negative numbers. So we cannot compare the output to input to see the limit. That is why a new variable is taken to make output if positive to make it to negative only for comparision.
			if (first > 0)
			{
				neg_num = (-first);
			}
			else
			{
				neg_num = first;
			}
		}
	}
	else
	{
		printf("Invalid input");
	}

	printf("\n");
}