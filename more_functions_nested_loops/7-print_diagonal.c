#include "main.h"

/**
 * print_diagonal - Prints a diagonal of length n
 * @n: Length of line
 *
 * Return: Always void
 */
void print_diagonal(int n)
{
	int len;
	int i;
	int j;

	if (len <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
