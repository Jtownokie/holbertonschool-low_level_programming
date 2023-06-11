#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Byte constant
 * @n: Nth bytes of memory
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (temp);
}
