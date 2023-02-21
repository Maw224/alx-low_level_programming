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
			if ((x * y) < 10)
			{
				if (y != 0)
					_putchar(' ');
				_putchar('0' + x * y);
			}
			else
			{
				_putchar('0' + x * y / 10);
				_putchar('0' + x * y % 10);
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
