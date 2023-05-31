#include "main.h"

/**
 * _isdigit - Checks if input is digit
 * @c: Input Integer
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	int num;

	num = c;

	if (isdigit(num))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

