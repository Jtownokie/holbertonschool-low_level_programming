#include "main.h"

/**
 * *_strcat - Function that concatenates two strings
 * @dest: String Pointer Destination
 * @src: String to Append to Destination
 *
 * Return: Pointer to New String
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		*dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *dest + '\0';
	return (dest);
}