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
	unsigned long int result;

	if (size >= len1 || size >= len2)
		return (0);

	result = atoi(n1) + atoi(n2);
	return (r);
}
