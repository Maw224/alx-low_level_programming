#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct Node - structor for node
 * @str: string
 * @len: string length
 * @next: pointer to next Node
 */
typedef struct Node
{
	char *str;
	int len;
	struct Node *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *);

#endif
