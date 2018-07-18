#include <stdlib.h>

/**
 * _oops - frees memory on alloc_grid failure
 * @gridman: ssss_gridman
 * @i: height
 *
 * Return: void
 */

void _oops(int **gridman, int i)
{
	int j;

	if (i > 0)
	{
		for (j = i - 1 ; j >= 0 ; j--)
		{
			free(gridman[j]);
		}
	}
	free(gridman);
}

/**
 * alloc_grid - makes grid of ints width wide and height high
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **gridman;

	if (width > 0 && height > 0)
	{
		gridman = malloc(sizeof(int*) * height);
		if (gridman)
		{
			for (i = 0 ; i < height ; i++)
			{
				gridman[i] = malloc(sizeof(int) * width);
				if (gridman[i])
				{
					for (j = 0 ; j < width ; j++)
					{
						gridman[i][j] = 0;
					}
				}
				else
				{
					_oops(gridman, i);
					return ('\0');
				}
			}
			return(gridman);
		}
	}
	return ('\0');
}
