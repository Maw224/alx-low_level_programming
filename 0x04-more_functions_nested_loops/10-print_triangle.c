#include "main.h"

/**
 * print_triangle - main block
 * @n: size
 */

void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = n - i; j > 1; j--)
		{
			_putchar(' ');
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

