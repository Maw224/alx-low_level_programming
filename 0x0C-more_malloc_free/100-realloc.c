#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	if (!ptr)
	{
		new = malloc(new_s);

		if (!new)
			return (NULL);
	
		return (new);
	}

	new = malloc(new_s);

	if (!new)
	{
		free(ptr);
		return (NULL);
	}

	memcpy(new, ptr, new_s);
	free(ptr);
	return (new);
}
