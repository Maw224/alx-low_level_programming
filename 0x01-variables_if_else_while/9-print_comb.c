#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}

