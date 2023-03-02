#include "main.h"

/**
 * print_number - main block
 * @n: number
 */

void print_number(int n)
{
	int i = 0, hld = n, max = 1;

	while (i == 0)
	{
		if (hld / 10 == 0)
			i = 1;
		else
		{
			max *= 10;
			hld /= 10;
		}
	}

	if (n < 0)
		_putchar('-');

	hld = n;
	while (max >= 1)
	{
		if (i == 1)
			_putchar('0' + (hld % 10));
		else
			_putchar('0' + (hld / max));

		hld -= (hld / max) * max;
		max /= 10;
	}
}
