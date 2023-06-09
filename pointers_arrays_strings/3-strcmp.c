#include "main.h"

/**
 * _strcmp - Function that compares strings
 * @s1: String Input
 * @s2: String Input
 *
 * Return: +, -, or 0 Integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (*s1)
	{
		if (s1[i] < s2[i])
		{
			result = -13;
		}
		else if (s1[i] > s2[i])
		{
			result = 13;
		}
		else if (s1[i] == s2[i])
		{
			result = 0;
			s2++;
		}
		s1++;
		i++;
	}
	return (result);
}
