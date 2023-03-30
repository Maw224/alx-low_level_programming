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

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = str;
	new->len = strlen(str);
	new->next = head;

	return (new);
}
