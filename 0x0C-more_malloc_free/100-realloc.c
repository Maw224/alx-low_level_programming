#include "main.h"
#include <stdlib.h>

/**
 * _realloc - main block
 * @ptr: pointer to array
 * @old_s: old sizr
 * @new_s: new size
 *
 * Return: pointer to new array
 */

void *_realloc(void *ptr, unsigned int old_s, unsigned int new_s)
{
	void *new;

	if (new_s == old_s)
		return (ptr);
	if (new_s == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_s);

	if (!new)
		return (NULL);

	memcpy(new, ptr, new_s);

	return (new);
}
