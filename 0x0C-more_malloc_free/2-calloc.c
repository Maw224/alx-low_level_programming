#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - main block
 * @n: members
 * @s: size
 *
 * Return: pointer to location
 */

void *_calloc(unsigned int n, unsigned int s)
{
	void *arr;

	if (n <= 0 || s <= 0)
		return (NULL);

	arr = malloc (n * s);

	if (!arr)
		return (NULL);

	memset(arr, 0, n * s);

	return (arr);
}
