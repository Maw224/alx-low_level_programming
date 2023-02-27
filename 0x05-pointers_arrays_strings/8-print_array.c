#include "main.h"

/**
 * print_array - main block
 * @a: array
 * @n: number
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(arr[i]);
	_putchar('\n');
}
