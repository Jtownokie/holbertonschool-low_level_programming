#include "main.h"

/**
 * print_sign - Prints sign of number
 * @n: Entered number
 *
 * Return: 1 if positive, 0 if 0, and -1 if negative
 */
int print_sign(int n)
{
	int usernum;
	int val;

	usernum = n;

	if (usernum > 0)
	{
		_putchar('+');
		val = 1;
	}
	else if (usernum == 0)
	{
		_putchar('0');
		val = 0;
	}
	else if (usernum < 0)
	{
		_putchar('-');
		val = -1;
	}
	return (val);
}
