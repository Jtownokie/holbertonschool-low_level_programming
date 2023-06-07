#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints second half of string
 *
 * @str: string input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i, j;

	if ((len % 2) == 0)
	{
		i = (len + 2) / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}

	for (j = i; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
