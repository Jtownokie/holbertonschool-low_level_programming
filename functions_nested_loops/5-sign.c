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

	usernum = n;

	if (usernum > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (usernum == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (usernum < 0)
	{
		_putchar('-');
		return (-1);
	}
}
