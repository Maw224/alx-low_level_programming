#include "main.h"

/**
 * _sqrt_recursion - main block
 * @n: number
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	int i = 0, j = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (i);
	_sqrt_recursion(n - j);
	j += 2;
	i += 1;
	return (i);
}
