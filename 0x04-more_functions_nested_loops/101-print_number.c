#include "main.h"

/**
 * print_number - main block
 * @n: number
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}

	k /= 10;

	if (k != 0)
		print_number(k);
	_putchar('0' + k % 10);
}
