#include "main.h"

/**
 * get_bit - main block
 * @n: number
 * @index: index of the bit to be returned
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ones = 1, idx = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	while (n || ones)
	{
		if (idx == index)
			return ((n & 1));
		n >>= 1;
		idx++;
		ones = 0;
	}
	return (-1);
}
