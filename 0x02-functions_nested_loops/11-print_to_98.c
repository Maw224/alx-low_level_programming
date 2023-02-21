#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - main block
 * @n: number
 * Return: 0
 */

int print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
