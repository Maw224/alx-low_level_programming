#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - main block
 * @c: string
 * Return: number from the string
 */

int _atoi(char *c)
{
	char *ch2 = "";
	int i, j, num_count = 0, sign_count = 0, value;

	if ((c[0] == '-' || c[0] == '+' || c[0] == ' ')
			&& !(c[1] >= '0' && c[1] <= '9'))
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			if ((c[i] >= '0' && c[i] <= '9')
					&& (c[i + 1] >= '0' && c[i + 1] <= '9'))
				num_count++;
			if (c[i] == '-')
				sign_count++;
		}
		printf("%d%d", sign_count, num_count);
		if (sign_count % 2 != 0)
			ch2[0] = '-';

		j = 1;
		printf("%s - and j %d", ch2, j);
		value = atoi(ch2);
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}
