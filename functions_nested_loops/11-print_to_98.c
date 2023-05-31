#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: Integer input
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int num;
	int i;
	int j;

	num = n;

	if (num < 98)
	{
		for (i = num; i <= 98; i++)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (num > 98)
	{
		for (j = num; j >= 98; j--)
		{
			_putchar('0' + j);
			_putchar(',');
			_putchar(' ');
		}
	}
}
