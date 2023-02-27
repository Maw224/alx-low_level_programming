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

	if (c[0] == '-' || c[0] == '+' || c[0] == ' ')
	{
		len = strlen(c);
		printf("Length:%d\n", len);

		for(i = 0; i < len; i++)
		{
			if (c[i] == '-')
			{
				sign_count += 1;
			}
		}

		printf("%d%d\n",sign_count, num_count);
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
