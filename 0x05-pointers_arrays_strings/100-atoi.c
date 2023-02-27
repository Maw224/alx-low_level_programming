#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _atoi - main block
 * @c: string
 * Return: number from the string
 */

int _atoi(char *c)
{
	int value;

	if ((c[0] == '-' || c[0] == '+' || c[0] == ' ')
			&& !(c[1] >= '0' && c[1] <= '9'))
	{
		int len, sign = 0, nums = 0, j = 1;
		char *ch1 = "";
		char *ch2 = "";

		for (len = 0; c[len] != '\0'; len++)
		{
			if (c[len] == '-')
				sign += 1;
			if (c[len] >= '0' && c[len] <= '9')
			{
				ch2[j] = c[len];
				j++;
			}
		}

		printf("not normal, - signs: -%d- , nums = %d, ch1: %s, ch2: %s, ", sign, nums, ch1, ch2);
		value = 2;
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}
