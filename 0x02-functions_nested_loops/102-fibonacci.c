#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int i, current = 1;
	int previos = 0;
	int save_current;

	while (i <= 50)
	{
		printf("%d", current + previos);
		if (i < 50)
			printf(", ");

		save_current = current;
		current += previos;
		previos = save_current;
		i++;
	}
	printf("\n");
	return (0);
}
