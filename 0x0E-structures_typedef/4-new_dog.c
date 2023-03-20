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
	int i = 0;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc((1 + strlen(name)) * sizeof(char));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	for (i = 0; owner[i]; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	new_dog->age = age;

	return (new_dog);
}
