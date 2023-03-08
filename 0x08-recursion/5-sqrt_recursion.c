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
	i += 1;
	j += 2;
	return (_sqrt_recursion(n - j));
}
