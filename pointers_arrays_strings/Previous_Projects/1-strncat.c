#include "main.h"

/**
 * *_strncat - Function that concatenates two strings, stopping at n bytes
 * @dest: String Pointer Destination
 * @src: String to Append to Destination
 * @n: Bytes to Append
 *
 * Return: Pointer to New String
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest, *clear = src;
	int len = 0, x;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > len)
	{
		n = len;
	}

	src = clear;

	for (x = 0; x < n; x++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (temp);
}
