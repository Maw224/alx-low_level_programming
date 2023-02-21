#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int i, current, previos = 1;
	int save_current;

	while (i <= 50)
	{
		if (i != 0)
			printf(" %d", current + previos);
		else
			printf("%d", current + previos);
		i++;
		save_current = current;
		current += previos;
		previos = save_current;
	}
}
