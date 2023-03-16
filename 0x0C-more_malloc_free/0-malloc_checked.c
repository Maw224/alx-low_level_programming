#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main bock
 * @n: size
 *
 * Return: Pointer to new location
 */

void *malloc_checked(unsigned int n)
{
	void *ptr = malloc(n);

	if (!ptr)
		exit(98);

	return (ptr);
}
