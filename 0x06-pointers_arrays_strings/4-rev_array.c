#include "main.h"

/**
 * reverse_array - main block
 * @arr: pointer to array
 * @n: number of elements
 */

void reverse_array(int *arr, int n)
{
	int i, num;

	for (i = 0; i < n / 2; i++)
	{
		num = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = num;
	}
}
