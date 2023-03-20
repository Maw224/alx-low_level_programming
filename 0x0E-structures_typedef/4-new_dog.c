#include "dog.h"
#include "stdlib.h"
#include "string.h"

/**
 * new_dog - main block
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(strlen(name) * sizeof(char));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(strlen(owner) * sizeof(char));
	if (!new_dog->owner)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
