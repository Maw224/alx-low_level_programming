#include "lists.h"
#include <string.h>

/**
 * add_node - main block
 * @head: head of linked list
 * @str: string
 * Return: address to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = strlen(str);
	char *dup;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup = strdup(str);

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
