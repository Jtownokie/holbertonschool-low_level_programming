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
	char *temp;
	int len;
	int i;

	temp = dest;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	len = len - 1;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (len > n)
	{
		dest[n] = '\0';
	}

	return (temp);
}
