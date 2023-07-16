#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: Converted number, or 0 if chars are not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int binary_place = 1, result = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result += binary_place;
			binary_place *= 2;
		}
		else if (b[i] == '0')
		{
			binary_place *= 2;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
