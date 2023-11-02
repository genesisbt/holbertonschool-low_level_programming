#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Name of the script
 * @grid: entry one
 * @height: entry two
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

void free_grid(int **grid, int height)
{
	int c1;

	for (c1 = 0 ; c1 < height ; c1++)
	{
			free(grid[c1]);
	}
	free(grid);
}
