#include "lists.h"

/**
 * insert_nodeint_at_index - main block
 * @h: pointer to list head
 * @index: index to add the node at
 * @n: data
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int index, int n)
{
	unsigned int idx = 0;
	listint_t *new, *temp = *h;

	while (idx < (index - 1))
	{
		if (!(temp->next))
			return (NULL);
		temp = temp->next;
		idx++;
	}

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
