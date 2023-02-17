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
			int combined = atoi(strcat(itoa(x), itoa(y)));

			putchar('0' + combined);
		}
	}
	putchar('\n');
	return (0);
}

