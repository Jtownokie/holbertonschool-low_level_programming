#include "main.h"

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
	int noaccept = 0;

	while (*s)
	{
		if (noaccept == 0)
		{
			while (*accept)
			{
				if (*s == *accept)
				{
					len++;
					break;
				}
				else
				{
					*accept++;
					if (*accept == '\0')
					{
						noaccept = 1;
					}
				}
			}
		}
		else
		{
			break;
		}
		*s++;
	}
	return (len);
}
