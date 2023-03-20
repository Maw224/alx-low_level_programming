#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Moawia Ahmed
 * Desc: header file for dog structure
 */

/**
 * struct dog - new dog struct type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef struct dog type
 */
typedef struct dog dog_t;

void init_dog(struct dog, char *, float, char *);
void print_dog(struct dog);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);

#endif
