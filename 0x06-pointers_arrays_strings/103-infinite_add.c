#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * infinte_add - main block
 * @n1: first number
 * @n2: second number
 * @r: buffer to save the result
 * @size: buffer size
 * Return: pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size)
{
	int len1 = strlen(n1), len2 = strlen(n2);
	int i;

	if (size <= len1 || size <= len2)
		return (0);

	for (i = 0; i < size; i++)
	{
		if ((len1 - i - 1) < 0 && (len2 - i - 1) >= 0)
			r[size - i - 1] = n2[len2 - i - 1];
		else if ((len2 - i - 1) < 0 && (len1 - i - 1) >= 0)
			r[size - i - 1] = n1[len1 - i - 1];
		else if ((len1 - i - 1) >= 0 && (len2 - i - 1) >= 0)
			r[size - i - 1] = n1[len1 - i - 1] + n2[len2 - i - 1];
		else
			r[size - i - 1] = r[size - i - 1];
	}

	return (r);
}
