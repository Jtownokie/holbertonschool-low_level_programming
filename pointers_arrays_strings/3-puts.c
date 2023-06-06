#include "main.h"

/**
 * _puts - Print String Function
 * @str: Pointer input
 *
 * Return: Always void
 */
void _puts(char *str)
{
	int i;
	char string[];

	for (i = 0; i != '\0'; i++)
	{
		string[i] = str[i];
		_putchar(string[i]);
	}
}
