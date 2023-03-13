#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - main.block
 * @w: width
 * @h: height
 * Return: pointer to 2D array
 */

int **alloc_grid(int w, int h)
{
	int **arr, i, j;

	if (w <= 0 || h <= 0)
		return (NULL);

	arr = malloc(h * sizeof(int *));
	if (!arr)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		arr[i] = malloc(w * sizeof(int));

		if (!arr[i])
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < w; i++)
		for (j = 0; j < h; j++)
			arr[i][j] = 0;

	return (arr);

}
