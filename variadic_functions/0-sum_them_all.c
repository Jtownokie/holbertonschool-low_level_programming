#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of all variadic arguments
 * @n: Number of variadic arguments
 *
 * Return: Sum of variadic arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list varg;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(varg, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(varg, int);
	}

	va_end(varg);
	return (sum);
}
