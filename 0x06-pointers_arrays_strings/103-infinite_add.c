#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int checkDone(int, int, char *, int, int, int);

/**
 * infinite_add - main block
 * @n1: first number
 * @n2: second number
 * @r: buffer to save the result
 * @size: buffer size
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size)
{
	int len1 = strlen(n1), len2 = strlen(n2), len3 = 0;
	int i, rem;

	if (size <= len1 || size <= len2)
		return (0);
	for (i = 0; i < size; i++)
	{
		len3++;
		if ((len1 - i - 1) < 0 && (len2 - i - 1) >= 0)
		{
			*(r + (size - i - 1)) = rem != 0
				? ((n2[len2 - i - 1] - '0') + rem) % 10
				: (n2[len2 - i - 1] - '0') % 10;
			rem = rem != 0 ? ((n2[len2 - i - 1] - '0') + rem) / 10 : 0;
		}
		else if ((len2 - i - 1) < 0 && (len1 - i - 1) >= 0)
		{
			*(r + (size - i - 1)) = rem != 0
				? ((n1[len1 - i - 1] - '0') + rem) % 10
				: (n1[len1 - i - 1] - '0') % 10;
			rem = rem != 0 ? ((n1[len1 - i - 1] - '0') + rem) / 10 : 0;
		}
		else if ((len1 - i - 1) >= 0 && (len2 - i - 1) >= 0)
		{
			*(r + (size - i - 1)) = rem != 0
				? ((n1[len1 - i - 1] - '0') + (n2[len2 - i - 1] - '0') + rem) % 10
				: ((n1[len1 - i - 1] - '0') + (n2[len2 - i - 1] - '0')) % 10;
			rem = rem != 0
				? ((n1[len1 - i - 1] - '0') + (n2[len2 - i - 1] - '0') + rem) / 10
				: ((n1[len1 - i - 1] - '0') + (n2[len2 - i - 1] - '0')) / 10;
		}
		if (checkDone(len1, len2, r, size, i, rem))
			break;
	}
	if (len3 >= size)
		return (0);
	printf("%d is length\n", len3);
	return (r);
}

/**
 * checkDone - secondary block
 * @len1: num
 * @len2: num
 * @r: str
 * @size: num
 * @i: num
 * @rem: num
 *
 * Return: 1 or 0
 */

int checkDone(int len1, int len2, char *r, int size, int i, int rem)
{
	if ((len1 - i - 1) < 0 && (len2 - i - 1) < 0)
	{
		*(r + (size - i - 1)) = rem;
		return (1);
	}
	else
		return (0);
}
