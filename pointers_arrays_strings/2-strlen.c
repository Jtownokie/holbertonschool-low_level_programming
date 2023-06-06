#include "main.h"

/**
 * _strlen - string length
 * @s: Pointer input
 *
 * Return: Always void
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		*s = *s + 1;
	}
	return (length);
}
