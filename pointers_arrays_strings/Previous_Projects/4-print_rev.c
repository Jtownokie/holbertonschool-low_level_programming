#include "main.h"

/**
 * print_rev - Print String Reverse Function
 * @s: Pointer input
 *
 * Return: Always void
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0' ; i++)
	{
		j++;
	}

	j = (j - 1);

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
