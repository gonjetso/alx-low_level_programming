#include <stdlib.h>

/**
 * free_grid - function
 * @grid: grid
 * @height: height
 * Return: zero
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
