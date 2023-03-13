#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main block
 * @str: string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(len * sizeof(char));

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	if (!dup)
		return (NULL);
	return (dup);
}
