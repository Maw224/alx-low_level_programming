#include "function_pointers.h"

/**
 * array_iterator - main block
 * arr: array of ints
 * s: size of arr
 * action: pointer to function
 */

void array_iterator(int *arr, size_t s, void (*action)(int))
{
	unsigned int i;

	for(i = 0; i < s; i++)
		action(arr[i]);
}
