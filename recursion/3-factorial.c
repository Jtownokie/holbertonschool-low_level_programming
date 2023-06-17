#include "main.h"

/**
 * factorial - Function that returns factorial of input
 * @n: number to get factorial of
 *
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
