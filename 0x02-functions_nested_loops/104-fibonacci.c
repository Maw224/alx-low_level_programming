#include "stdio.h"

#define MAX 1000000000

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	unsigned long int current = 1, previos = 0, save_current, next, fr1, fr2;
	int i = 0;

	while (i < 98)
	{
		if ((current + previos) > MAX || fr1 > 0 || fr2 > 0)
		{
			if(fr1 > 0 || fr2 > 0)
			{
				save_current = fr1;
				fr1 = ((save_current * 10) + fr2) / MAX;
				fr2 = ((save_current * 10) + fr2) % MAX;
			}
			else
			{
				fr1 = (current + previos) / MAX;
				fr2 = (current + previos) % MAX;
			}
			
			printf("%lu%lu", fr1, fr2);
		}
		else
		{
			next = current + previos;
			save_current = current;
			current += previos;
			previos = save_current;
			printf("%lu", next);
		}

		if (i < 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
