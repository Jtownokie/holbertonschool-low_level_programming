#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Entered character
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	int letter;

	letter = c;

	if (isalpha(letter))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
