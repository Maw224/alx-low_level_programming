#include "main.h"

/**
 * clear_bit - main block
 * @n: number
 * @index: index of bit to be cleared
 * Return: 1 success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = ~(1 << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= mask;
	return (1);
}
