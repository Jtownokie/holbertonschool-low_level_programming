#include "main.h"

/**
 * find_sqrt - Support Function for sqrt_recursion
 * @num: Number to square
 * @root: Number to pass to sqrt_recursion
 *
 * Return: Square Root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
	{
		return (find_sqrt(num, root + 1));
	}
}

/**
 * _sqrt_recursion - Function that returns natural square root of a number
 * @n: Number to Square
 *
 * Return: Square Root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 0));
	}
}
