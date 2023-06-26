#include "main.h"

/**
 * free_grid - Function that frees a 2D array alloc
 * @grid: Grid to free
 * @height: Height of Array
 *
 * Return: Always Void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
