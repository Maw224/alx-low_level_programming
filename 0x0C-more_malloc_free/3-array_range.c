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
	int *arr, i;

	if (min >= max)
		return (NULL);

	arr = malloc(max - min + 1);
	if (!arr)
		return (NULL);

	i = 0;
	while (min <= max)
		arr[i++] = min++;

	return (arr);
}
