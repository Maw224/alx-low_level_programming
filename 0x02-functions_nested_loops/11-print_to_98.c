#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - main block
 * @n: number
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
	}
	printf("\n");
	return (0);
}
