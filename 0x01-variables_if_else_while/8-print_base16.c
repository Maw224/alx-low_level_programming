#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 16)
	{
		if (x < 10)
			putchar('0' + x);
		else
			putchar('a' + x);
	}
	putchar('\n');
	return (0);
}
