#include "main.h"
#include <stdio.h>

/**
 * print_array - main block
 * @arr: array
 * @n: number
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
