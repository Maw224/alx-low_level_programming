#include "main.h"
#include "stdio.h"

/**
 * print_times_table - main block
 * @n: number >= 0 and <= 15
 * Return: void
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int x, y;

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				if (x * y >= 100)
					printf(" %d", x * y);
				else if (x * y >= 10)
					printf("  %d", x * y);
				else
					printf("   %d", x * y);
				if (y != n)
					printf(",");
			}
		}
	}
}
