#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int zn;
	int comma = 44;
	int space = 32;

	for (zn = 48; zn <= 57; zn++)
	{
		putchar(zn);
		if (zn < 57)
		{
			putchar(comma);
			putchar(space);
		}
		else if (zn == 57)
		{
			putchar(space);
		}
	}

	return (0);
}
