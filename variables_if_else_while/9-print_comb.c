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
	int nine = 57;

	for (zn = 48; zn <= 56; zn++)
	{
		putchar(zn);
		putchar(comma);
		putchar(space);
	}
	putchar(nine);

	return (0);
}
