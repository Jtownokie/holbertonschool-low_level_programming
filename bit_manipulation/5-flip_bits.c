#include "main.h"

/**
 * flip_bits - Returns number of bit needed to flip from one num to another
 * @n: num1
 * @m: num2
 *
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}

	return (count);
}
