#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	long int current = 1, previos = 0;
	long int next, save_current, result;

	result = 0;
	while (next <= 4000000)
	{
		next = current + previos;
		save_current = current;
		current += previos;
		previos = save_current;

		if (next % 2 == 0)
			result += next;
	}
	printf("%lu\n", result);
	return (0);
}
