#include "main.h"

/**
 * more_numbers - main block
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar('0' + j);
			else
			{
				x = j / 10;
				y = j % 10;

				_putchar('0' + x);
			}
		}
		_putchar('\n');
	}
}
