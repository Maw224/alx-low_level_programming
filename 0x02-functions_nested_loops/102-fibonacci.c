#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	long int current = 1, previos = 0;
	long int next, save_current;
	int i;

	for (i = 1; i <= 50; i++)
	{
		next = current + previos;
		save_current = current;
		current += previos;
		previos = save_current;

		printf("%lu", next);
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
