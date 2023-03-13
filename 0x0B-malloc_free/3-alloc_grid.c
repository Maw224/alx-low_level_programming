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
	int **arr;

	if (w <= 0 || h <= 0)
		return (NULL);

	arr = malloc(w * h * sizeof(int));

	if (!arr)
		return (NULL);
	return (arr);

}
