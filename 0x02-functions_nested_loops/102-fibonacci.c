#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	long int current = 1;
	long int previos = 0;
	int save_current, i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", current + previos);
		if (i < 50)
			printf(", ");

		save_current = current;
		current += previos;
		previos = save_current;
	}
	printf("\n");
	return (0);
}
