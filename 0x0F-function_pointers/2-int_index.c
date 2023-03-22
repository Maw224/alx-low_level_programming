#include "function_pointers.h"

/**
 * int_index - main block
 * @arr: array of int
 * @s: size of arr
 * @cmp: pointer to function
 * Return: index of compare match
 */

int int_index(int *arr, int s, int (*cmp)(int))
{
	int i;

	if (!arr || !cmmp)
		return (-1);

	if (s <= 0)
		return (-1);

	for (i = 0; i < s; i++)
	{
		if (cmp(arr[i]))
			return (i);
	}

	return (-1);
}
