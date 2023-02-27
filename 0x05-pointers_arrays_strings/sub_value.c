#include "main.h"

/**
 * stoi_max - calculates the the integer of string
 * @c: string
 * @max: max
 * @sign: sign
 * Return: the integer value
 */

int stoi_max(char *c, int max, int sign)
{
	int sub_value;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			max /= 10;
			sub_value += (c[i] - '0')* max;
			if (c[i + 1] < '0' || c[i + 1] > '9')
				break;
		}
	}
	if (sign % 2 != 0)
		sub_value *= -1;

	return (sub_value);
}
