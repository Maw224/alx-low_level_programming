#include "main.h"
int _sqrt(int, int);

/**
 * _sqrt_recursion - main block
 * @n: number
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt - secondary block
 * @n: number
 * @i: number
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	int sq = i * i;

	if (n == sq)
		return (i);
	else if (n > sq)
		return (_sqrt(n, ++i));
	else
		return (-1);
}
