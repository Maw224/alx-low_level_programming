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
	/* char *ch2; */
	int i;

	if (c[0] == '-' || c[0] == '+' || c[0] == ' ')
	{
		printf("not regular");
	}
	else
	{
		i = atoi(c);
	}
	return (i);
}
