#include "main.h"

/**
 * print_binary - main block
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned int bit, ones = 1;

	while (n || ones)
	{
		bit = (n & 1);
		_putchar(bit + '0');
		n >>= 1;
		ones = 0;
	}

}
