#include "main.h"

/**
 * times_table - Displays Times Table of 9
 *
 * Return: Always 0
 */
void times_table(void)
{
	int x, y, prod;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0 ; y <= 9; y++)
		{
			prod = (x * y);
			if (y == 0)
				;
			else if (prod < 10)
			{
				_putchar(' ');
			}
			else if (prod >= 10)
			{
				_putchar('0' + (prod / 10));
			}
			_putchar((prod % 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');


		}
	}


}
