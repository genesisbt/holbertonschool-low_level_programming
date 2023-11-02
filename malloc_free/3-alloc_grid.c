#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Name of the script
 * @width: entry one
 * @height: entry two
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int c1, c2, c3;
		int **grid;

		grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (c1 = 0 ; c1 < height ; c1++)
		{
			grid[c1] = malloc(sizeof(int) * width);
			if (grid[c1] == NULL)
			{
				for (c3 = 0 ; c3 <= c1 ; c3++)
				{
					free(grid[c1]);
					free(grid);
				}
				return (NULL);
			}
		}
		for (c1 = 0 ; c1 < height ; c1++)
		{
			for (c2 = 0 ; c2 < width ; c2++)
			{
				grid[c1][c2] = 0;
			}
		}
		return (grid);
	}
}
