#include "main.h"

/**
 * _isdigit - Checks if input is digit
 * @c: Input Integer
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

