#include "main.h"

/**
 * print_binary - main block
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	unsigned int bit;
	while (n)
	{
		bit = (n & 1);
		_putchar(bit + '0');
		n >>= 1;
	}

}
