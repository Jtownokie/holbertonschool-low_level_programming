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
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
	
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
