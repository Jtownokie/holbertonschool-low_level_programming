#include "main.h"

/**
 * *_strncpy - Function that copies src to dest, stopping at n bytes
 * @dest: String Pointer Destination
 * @src: String to Copy to Destination
 * @n: Bytes to Append
 *
 * Return: Pointer to New String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
