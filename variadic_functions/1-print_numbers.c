#include "variadic_functions.h"

/**
 * print_numbers - Variadic Function that prints numbers
 * @separator: String to print between each number
 * @n: Number of variadic arguments
 *
 * Return: Always Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varg;
	unsigned int i;

	va_start(varg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(varg, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(varg);
}
