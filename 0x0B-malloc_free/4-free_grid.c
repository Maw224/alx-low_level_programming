#include "main.h"
#include <stdlib.h>

/**
 * free_grid - main block
 * @grid: 2d array
 * @h: grid height
 */

void free_grid(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
