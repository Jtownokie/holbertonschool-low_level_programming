#include "main.h"
#include "2-strchr.c"

/**
 * *_strpbrk - Returns a pointer to the first occurrence in a string
 * @s: String to check
 * @accept: String to locate
 *
 * Return: Pointer to first occurrence of character
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = s;

	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}

	while (*s)
	{
		if (_strchr(accept, *s))
		{
			temp = s;
			return (temp);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
