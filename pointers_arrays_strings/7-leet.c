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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a[i] || s[i] == a[i] - 32)
		{
			s[i] = n[i];
		}
	}

	return (r);
}
