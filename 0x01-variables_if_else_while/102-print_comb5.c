#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int x, y = 0;

	while (x < 100)
	{
		while (y < 100)
		{
			if (x < y)
			{
				putchar('0' + x);
				putchar(32);
				putchar('0' + y);
			}
			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
