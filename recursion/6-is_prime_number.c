#include "main.h"

/**
 * prime - Support Function
 * @a: Input from is_prime_number
 * @b: Starting point
 *
 * Return: 0 or 1
 */

int prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime(a, b + 1));
}

/**
 * is_prime_number - Function that checks if input is prime number
 * @n: Number to check
 *
 * Return: 1 if Yes, 0 if No
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
