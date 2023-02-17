#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x != y && x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x < 9  || y < 9 )
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
