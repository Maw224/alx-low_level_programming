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
		int i, max = 1, sign = 0, nums = 0;

		for (i = 0; c[i] != '\0'; i++)
		{
			if (c[i] == '-')
				sign += 1;
			if (c[i] >= '0' && c[i] <= '9')
			{
				nums++;
				max *= 10;
				if (c[i + 1] < '0' || c[i + 1] > '9')
					break;
			}
		}

		value = stoi_max(c, max, sign);
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}


/**
 * stoi_max - secondary block
 * @c: string
 * @max: max integer
 * @sign: sign integer
 * Return: signed integer value
 */


int stoi_max(char *c, int max, int sign)
{
	int sub_value = 0, i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			max /= 10;
			sub_value += (c[i] - '0') * max;
			if (c[i + 1] < '0' || c[i + 1] > '9')
				break;
		}
	}
	if (sign % 2 != 0)
		sub_value *= -1;

	return (sub_value);
}
