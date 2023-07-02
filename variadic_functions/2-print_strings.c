#include "variadic_functions.h"

/**
 * print_strings - Variadic Function that prints strings
 * @separator: String to print between each string
 * @n: Number of variadic arguments
 *
 * Return: Always Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varg;
	unsigned int i;

	va_start(varg, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(varg, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(varg, char *));
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(varg);
}
