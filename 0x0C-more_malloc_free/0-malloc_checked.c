#include "main.h"
#include <strlib.h>

/**
 * malloc_checked - main bock
 * @n: size
 */

void *malloc_checked(unsigned int n)
{
	void *ptr = malloc(n);

	if (!ptr)
		exit(98);

	return (ptr);
}
