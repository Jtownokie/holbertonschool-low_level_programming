#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function on array
 * @array: Array to execute function on
 * @size: Size of Array
 * @action: Pointer to functions
 *
 * Return: Always Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
