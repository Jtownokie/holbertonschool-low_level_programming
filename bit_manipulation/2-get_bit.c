#include "main.h"

/**
 * get_bit - Returns value of bit at given index
 * @n: Value to check
 * @index: Index to check
 *
 * Return: value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	return ((n & m) > 0);
}
