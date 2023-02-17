#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int x, first, second;

	x = 0;
	while (x < 100)
	{
		first = x / 10;
		second = x % 10;
		if (first != second && first < second)
		{
			putchar('0' + first);
			putchar('0' + second);
			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		x++
	}
	putchar('\n');
	return (0);
}
