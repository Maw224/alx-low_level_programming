#include "main.h"
#include <stdlib.h>

/**
 * array_range - main block
 * @min: min elem
 * @max: max elem
 * Return: array from min to max
 */

int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (NULL);

	while (min <= max)
		arr[i++] = min++;

	return (arr);
}
