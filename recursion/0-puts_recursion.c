#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: String to Print
 *
 * Return: Always Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
		return (void);
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
