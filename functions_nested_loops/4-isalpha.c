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

	if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
