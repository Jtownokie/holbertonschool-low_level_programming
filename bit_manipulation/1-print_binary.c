#include "main.h"

/**
 * print_binary - Prints Binary representation of number
 * @n: unsigned long int
 *
 * Return: Always Void
 */

void print_binary(unsigned long int n)
{
	unsigned long int printbit = 1ul << 63;
	char c = '0';

	while (!(printbit & n) && printbit != 0)
		printbit = printbit >> 1;

	if (printbit == 0)
		_putchar(c);

	while (printbit)
	{
		if (printbit & n)
			c = '1';
		else
			c = '0';
		_putchar(c);
		printbit = printbit >> 1;
	}
}
