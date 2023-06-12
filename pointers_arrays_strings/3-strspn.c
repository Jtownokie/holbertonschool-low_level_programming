#include "main.h"
#include "2-strchr.c"

/**
 * _strspn - Counts number of chars in str s that match chars in str accept
 * @s: String to check
 * @accept: Chars to count from
 *
 * Return: Number of chars that matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (s2 == NULL))
	{
		return (len);
	}

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}

	return (len);
}
