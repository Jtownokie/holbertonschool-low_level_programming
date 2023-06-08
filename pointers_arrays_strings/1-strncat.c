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

	while (*dest != '\0')
	{
		dest++;
	}
	for (src = 0; *src != '\0'; src++)
	{
		if (src <= n)
		{
			*dest++ = *src++;
		}
	}

	*dest = '\0';
	return (temp);
}
