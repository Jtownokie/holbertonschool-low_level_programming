#include "main.h"

/**
 * times_table - Displays Times Table of 9
 *
 * Return: Always 0
 */
void times_table(void)
{
	int x, int y, int result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;
			if (result < 10)
			{
				if (y == 9)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + result);
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (result >= 10)
			{
				if (y == 9)
				{
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else
				{
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
