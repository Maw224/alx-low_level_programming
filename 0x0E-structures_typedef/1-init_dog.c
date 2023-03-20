#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main block
 * @d: dog variable
 * @name: dog name
 * @age: dog age
 * @owner dog owner
 */

void dog_init(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
