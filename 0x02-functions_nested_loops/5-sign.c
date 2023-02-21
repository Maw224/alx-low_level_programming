#include "main.h"

/**
 * print_sign - main block
 * @n: Number
 * Return: 1 n > 0, 0 n = 0, -1 n < 0
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
