#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int first_x, second_x, first_y, second_y, x, y;

	for (x = 0; x < 100; x++)
	{
		first_x = x / 10;
		second_x = x % 10;
		for (y = 0; y < 100; y++)
		{
			first_y = y / 10;
			second_y = y % 10;
			if (first_x < first_y || (first_x == first_y && second_x < second_y))
			{
				putchar('0' + first_x);
				putchar('0' + second_x);
				putchar(32);
				putchar('0' + first_y);
				putchar('0' + second_y);
				if (x < 89)
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
