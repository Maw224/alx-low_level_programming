#include "main.h"


/**
 * times_table - main block
 * Return: 0
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar('0' + x * y);
			_putchar(',');
			_putchar(' ');
		}
	}
}
