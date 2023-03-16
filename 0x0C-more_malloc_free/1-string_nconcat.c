#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - main blck
 * @s1: string
 * @s2: string
 * @n: number of chars
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, len = 0;

	if (!s2)
		s2 = "";
	if (!s1)
		s1 = "";

	for (i = 0; s1[i]; i++)
		len++;

	s3 = malloc((len + n + 1) * sizeof(char));

	if (!s3)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];

	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];

	s3[i + n] = '\0';

	return (s3);
}
