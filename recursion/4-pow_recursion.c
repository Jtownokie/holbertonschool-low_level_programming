#include "main.h"

/**
 * _pow_recursion - Function that returns x to the power of y
 * @x: Base Number
 * @y: Exponent
 *
 * Return: Result of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (_pow_recursion(x, y - 1) * x);
}
