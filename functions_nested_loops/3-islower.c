#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase character
 * @c: Entered character
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	int letter;

	letter = c;

	if (islower(letter))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
