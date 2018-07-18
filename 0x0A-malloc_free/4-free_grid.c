#include <stdlib.h>

/**
 * free_grid - frees up memory used by alloc_grid
 * @grid: grid
 * @height: grid height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid)
	{
		for (i = 0 ; i < height ; i++)
		{
			if (grid[i])
			{
				free(grid[i]);
			}
		}
		free(grid);
	}
}
