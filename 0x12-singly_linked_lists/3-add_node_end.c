#include "lists.h"
#include <string.h>

/**
 * add_node_end - main block
 * @head: head list
 * @str: string
 * Return: pointer to the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int len;
	char *dup;

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
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
