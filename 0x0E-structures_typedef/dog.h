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

/**
 * dog_t - struct dog type
 */

typedef struct dog dog_t;

void init_dog(struct dog, char *, float, char *);
void print_dog(struct dog);
dog_t *new_dog(char *, float, char *);

#endif
