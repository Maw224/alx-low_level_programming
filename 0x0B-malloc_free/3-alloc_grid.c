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
	int **arr, i;

	if (w <= 0 || h <= 0)
		return (NULL);

	arr = malloc(w * h * sizeof(int));

	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < (w * h); i++)
		arr[i] = 0;

	return (arr);

}
