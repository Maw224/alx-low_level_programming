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
	char *ch2 = "";
	int j, num_count = 0, sign_count = 0, value;
	int len, i;

	if ((c[0] == '-' || c[0] == '+' || c[0] == ' ')
			&& !(c[1] >= '0' && c[1] <= '9'))
	{
		len = strlen(c);
		printf("Length:%d\n", len);
		ch2[0] = 'm';
		i = 0;
		j = 1;
		value = 2;
		printf("i: %d, j: %d, num: %d, sign: %d, ch2: %s",i, j, num_count, sign_count, ch2);
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}
