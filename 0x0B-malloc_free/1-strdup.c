#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - main block
 * @str: string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *dup;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	printf("%d", len);
	dup = malloc(len * sizeof(char));

	while (*str)
	{
		*dup = *str;
		dup++;
		str++;
	}

	if (!dup)
		return (NULL);
	return (dup);
}
