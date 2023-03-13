#include "main.h"
#include <stdlib.h>

/**
 * strdup - main block
 * @str: string
 * Return: pointer to new string
 */

char *strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = realloc(str, sizeof(str));

	if (!dup)
		return (NULL);
	return (dup);
}
