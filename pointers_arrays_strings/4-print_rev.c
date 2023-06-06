#include "main.h"

/**
 * print_rev - Print String Reverse Function
 * @s: Pointer input
 *
 * Return: Always void
 */
void print_rev(char *str)
{
	for (*str = '\0';str > -1; str--)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
