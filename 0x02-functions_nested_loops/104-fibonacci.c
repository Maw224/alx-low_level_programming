#include "stdio.h"

#define MAX 1000000000

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	unsigned long int current = 1, previos = 0, save_current, fr1, fr2;
	int i = 0;

	while (i < 98)
	{
		if ((current + previos) > MAX || fr1 > 0 || fr2 > 0)
		{
			fr1 = (current + previos) / MAX;
			fr2 = (current + previos) % MAX;
			printf("%lu%lu", fr1, fr2);
		}
		else
			printf("%lu", current + previos);

		if (i < 97)
			printf(", ");

		save_current = current;
		current += previos;
		previos = save_current;
		i++;
	}
	printf("\n");
	return (0);
}
