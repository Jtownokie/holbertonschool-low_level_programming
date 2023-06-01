#include "main.h"

/**
 * print_line - Prints a line of length n
 * @n: Length of line
 *
 * Return: Always void
 */
void print_line(int n)
{
	int len;
	int i;

	len = n;

	if (len <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
