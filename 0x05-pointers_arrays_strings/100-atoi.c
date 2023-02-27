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
		int i, len = 0, sign = 0, nums = 0;
		int sub_value = 0;
		int max = 1;

		for (i = 0; c[i] != '\0'; i++)
		{
			if (c[i] == '-')
			{
				len += 1;
				sign += 1;
			}
			if (c[len] >= '0' && c[len] <= '9')
			{
				len += 1;
				nums++;
				max *= 10;
				if (c[len + 1] < '0' || c[len + 1] > '9')
					break;
			}
		}


		printf("req len: %d, signs: %d, nums: %d, sub_value: %d, max: %d, "
				, len, sign, nums, sub_value, max);
		value = 2;
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}
