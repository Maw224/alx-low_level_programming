#include "main.h"
#include <stdlib.h>

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
	int *ARR;
	unsigned int i;

	if (n <= 0 || s <= 0)
		return (NULL);

	arr = malloc (n * s);

	if (!arr)
		return (NULL);

	ARR = arr;

	for (i = 0; i < (n * s); i++)
		ARR[i] = 0;

	return (arr);
}
