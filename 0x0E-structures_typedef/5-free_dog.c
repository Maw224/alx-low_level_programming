#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - main block
 * @d: dog
 */

void free_dog(dog_t *d)
{
	free(d);
}
