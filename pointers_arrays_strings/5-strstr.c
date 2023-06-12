#include "main.h"

/**
 * *_strstr - Returns a pointer to the first occurrence in a string
 * @haystack: String to check
 * @needle: String to locate
 *
 * Return: Pointer to first occurrence of character
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *) str);
	}

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}

	return (NULL);
}
