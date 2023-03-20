#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog, char *, float, char *);

#endif
