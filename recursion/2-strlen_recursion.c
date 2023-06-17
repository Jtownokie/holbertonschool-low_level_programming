#include "main.h"

/**
 * _strlen_recursion - Function that returns length of string
 * @s: String to get length from
 *
 * Return: Length of String
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
