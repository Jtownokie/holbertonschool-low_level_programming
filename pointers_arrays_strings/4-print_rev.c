#include "main.h"

/**
 * print_rev - Print String Reverse Function
 * @s: Pointer input
 *
 * Return: Always void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;
	int tmp;

	while (*s != '\0')
	{
		length = length + 1;
		*s = *s + 1;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[len - i - 1] = temp;
		_putchar(s[i]);
	}
	_putchar('\n');
}
