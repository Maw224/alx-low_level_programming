#include "main.h"

/**
 * print_number - main block
 * @n: number
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}

	num /= 10;

	if (num != 0)
		print_number(num);
	_putchar('0' + (unsigned int) num % 10);
}
