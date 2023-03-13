#include "main.h"
#include <stdlib.h>

/**
 * create_array - main block
 * @size: size of array
 * @c: character to fill the array
 * Return: pointer ti array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
