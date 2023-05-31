#include "main.h"

/**
 * print_numbers - Prints 0-9
 *
 * Return: Always void
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
