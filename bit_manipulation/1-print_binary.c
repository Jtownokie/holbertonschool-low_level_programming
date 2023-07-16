#include "main.h"

/**
 * print_binary - Prints Binary representation of number
 * @n: unsigned long int
 *
 * Return: Always Void
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = sizeof(unsigned long int) * 7; i >= 0; i--)
	{
		_putchar(((n & (1 << i)) >> i) + '0');
	}

	_putchar('\n');
}
