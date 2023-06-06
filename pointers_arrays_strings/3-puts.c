#include "main.h"

/**
 * _puts - Print String Function
 * @str: Pointer input
 *
 * Return: Always void
 */
void _puts(char *str)
{
	for (str = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
