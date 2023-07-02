#include "variadic_functions.h"

/**
 * print_all - Variadic Function that prints anything
 * @format: List of types of arguments to be passed
 *
 * Return: Always Void
 */

void print_all(const char * const format, ...)
{
	va_list varg;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(varg, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(varg, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(varg, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(varg, double), sep);
				break;
			case 's':
				str = va_arg(varg, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");

	va_end(varg);
}
