#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - main block
 * @s1: first string
 * @s2: secind string
 * Return: ointer to new
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j, len = 0;

	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len++;

	s3 = malloc((len + 1) * sizeof(char));

	if (!s3)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		s3[i] = s1[i];
	for (j = 0; i < len; i++, j++)
		s3[i] = s2[j];

	return (s3);
}
