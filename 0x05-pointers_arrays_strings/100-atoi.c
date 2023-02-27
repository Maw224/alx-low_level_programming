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
		int len, sign = 0, nums = 0;
		int sub_value = 0;

		for (len = 0; c[len] != '\0'; len++)
		{
			if (c[len] == '-')
				sign += 1;
			if (c[len] >= '0' && c[len] <= '9')
			{
				sub_value += (c[len] + '0') * 10;
				nums++;
			}
		}

		printf("not normal, - signs: -%d- , nums = %d, sub_value: %d, "
				, sign, nums, sub_value);
		value = 2;
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}
