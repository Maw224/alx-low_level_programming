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

	dup = malloc((len + 1) * sizeof(char));

	if (!dup)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
