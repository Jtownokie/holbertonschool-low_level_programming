#include "main.h"

/**
 * swap_int - Swaps value of two integers
 * @a: Pointer Input 1
 * @b: Pointer Input 2
 *
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
