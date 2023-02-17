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
		for (y = 0; y < 10; y++)
		{
			putchar('0' + strcat(x, y));
		}
	}
	putchar('\n');
	return (0);
}

