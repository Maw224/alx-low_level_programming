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
		int len;

		for (len = 0; c[len] != '\0'; len++)
			;

		printf("not normal, lenght: -%d-", len);
		value = 2;
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}
