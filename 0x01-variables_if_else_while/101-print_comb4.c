#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int x, first, second, third;

	x = 0;
	while (x < 1000)
	{
		first = x / 100;
		second = (x / 10) % 10;
		third = x % 10;
		if (first < second && second < third)
		{
			putchar('0' +  first);
			putchar('0' + second);
			putchar('0' + third);
			if (x < 789)
			{
				putchar(44);
				putchar(32);
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
