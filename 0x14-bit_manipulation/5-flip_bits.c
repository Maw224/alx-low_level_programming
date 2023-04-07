#include "main.h"

/**
 * flip_bits - main block
 * @n: first number
 * @m: second number
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, res = n ^ m;

	while (res)
	{
		bits += res & 1;
		res >>= 1;
	}

	return (bits);
}
