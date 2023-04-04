/*
Name        : ISAA KAZI
Date        : 31/01/2023
Description : A17 - WAP to toggle 'n' bits from given position of a number
Sample I/O  : Enter the number: 10
			  Enter number of bits: 3
			  Enter the pos: 5
Sample O/P  : Result = 50
*/

#include <stdio.h>

// Defination and Declaration of function.
int toggle_bits(int num, int bits, int pos)
{
	// Algorithum to toggle 'n' bits from given position of a number.
	return (num ^ ((1 << bits) - 1) << ((pos - bits) + 1));
}

int main()
{
	// Declaration of datatypes and variables used in this program.
	int num, bits, pos;

	// Printf and scanf are used to take an integer input form the user.
	printf("Enter the number: ");
	scanf("%d", &num);

	printf("Enter the number of bits: ");
	scanf("%d", &bits);

	printf("Enter the pos: ");
	scanf("%d", &pos);

	// Calling of function and printing the results of function.
	printf("Result = %d", toggle_bits(num, bits, pos));
}