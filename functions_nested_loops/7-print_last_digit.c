#include "main.h"

/**
 * print_last_digit - Displays last digit of input
 * @x: Integer input
 *
 * Return: Always 0
 */
int print_last_digit(int x)
{
	int num;
	int lastdigit;
	char lastchar;

	num = _abs(x);
	lastdigit = num % 10;
	lastchar = lastdigit + '0';
	_putchar(lastchar);

	return (lastdigit);
}
