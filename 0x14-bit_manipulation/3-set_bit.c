#include "main.h"

/**
 * set_bit - main block
 * @n: number
 * @index: index of the bit to be set
 * Return: new value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;
	return (1);
}
