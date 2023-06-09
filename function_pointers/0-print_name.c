#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: Name to print
 * @f: Pointer to function that prints name
 *
 * Return: Always Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
