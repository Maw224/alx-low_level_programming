 #include "main.h"

/**
 * jack_bauer - main block
 * Return: 0
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			_putchar(':');
			_putchar('0' + y / 10);
			_putchar('0' + y % 10);
			_putchar('\n');
		}
	}
}
