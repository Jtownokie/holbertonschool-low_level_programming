#include "main.h"

/**
 * *_memcpy - Copies src to dest
 * @dest: Pointer to memory area
 * @src: String to copy
 * @n: Nth bytes of memory
 *
 * Return: Pointer to memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (temp);
}
