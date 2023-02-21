#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	long int current = 1, previos = 0, save_current, next;
	int i = 0;

	while (i < 98)
	{
		next = current + previos;
		save_current = current;
		current += previos;
		previos = save_current;

		if (i < 97)
			printf("%d, ", next);
		else
			printf("%d\n", next);
		i++;
	}
	return (0);
}