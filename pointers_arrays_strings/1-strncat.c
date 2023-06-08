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
	char *temp = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && src[i] <= src[n])
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp);
}
