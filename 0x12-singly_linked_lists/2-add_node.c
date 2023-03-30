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
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new);
		return (NULL);
	}

	len = strlen(dup);

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
