#include "main.h"

/**
 * *leet - Function to Encode String with leet
 * @s: String to encode
 *
 * Return: Pointer to encoded string
 */

char *leet(char *s)
{
	char *r = s;
	char a[6] = { 'a', 'e', 'o', 't', 'l' };
	char n[6] = { '4', '3', '0', '7', '1' };
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
			{
				*s = n[i];
			}
		}
		s++;
	}

	return (r);
}
