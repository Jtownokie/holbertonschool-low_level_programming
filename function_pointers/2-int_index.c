#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array to execute cmp on
 * @size: Size of array
 * @cmp: Pointer to functions
 *
 * Return: Index of first element found by cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}

		if (i == size)
		{
			return (-1);
		}
	}
		return (-1);
}
