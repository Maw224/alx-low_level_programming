#include "main.h"
int _prime(int, int);

/**
 * is_prime_number - main block
 * @n: number
 * Return: 1 prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - secondary block
 * @n: number
 * @i: number
 * Return: 1 prime, 0
 */

int _prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i <= (n / 2))
		return (_prime(n, ++i));
	else
		return (1);
}
