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
	if ((dest == NULL) && (src == NULL))
	{
		return (NULL);
	}

	char *start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
