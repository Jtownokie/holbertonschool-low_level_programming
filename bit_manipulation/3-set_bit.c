#include "main.h"

/**
 * set_bit - Sets value of a bit at index to 1
 * @n: Value to change
 * @index: Index to set
 *
 * Return: 1 if success, -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
