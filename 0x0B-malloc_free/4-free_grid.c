#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: source block
 * @height: height of array
 *
 * Return: void
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
