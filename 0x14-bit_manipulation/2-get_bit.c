#include "main.h"

/**
 * get_bit - main block
 * @n: number
 * @index: index of the bit to be returned
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
