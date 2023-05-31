#include "main.h"

/**
 * jack_bauer - Displays every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 3; i++)
	{
		_putchar('0' + i);
		for (j = 0; j < 4; j++)
		{
			_putchar('0' + j);
			_putchar(':');
			for (k = 0; k < 6; k++)
			{
				_putchar('0' + k);
				for (l = 0; l < 10; l++)
				{
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}

}
