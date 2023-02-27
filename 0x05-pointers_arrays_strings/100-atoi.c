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
	/*char *ch2 = "";*/
	/*int j, num_count = 0, sign_count = 0, value;*/
	/*int len, i;*/
	int value;

	if ((c[0] == '-' || c[0] == '+' || c[0] == ' ')
			&& !(c[1] >= '0' && c[1] <= '9'))
	{
		printf("not normal, lenght: %d", strlen(c));
		value = 2;
	}
	else
	{
		value = atoi(c);
	}
	return (value);
}
