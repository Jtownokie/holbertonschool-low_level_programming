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

	num = x;
	lastdigit = num % 10;
	_putchar(lastdigit);

	return (lastdigit);
}
