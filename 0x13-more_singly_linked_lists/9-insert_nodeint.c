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
	listint_t *new;

	while (*h)
	{
		if (idx == (index - 1))
		{
			new = malloc(sizeof(listint_t));
			if(!new)
				return (NULL);

			new->n = n;
			new->next = (*h)->next;
			(*h)->next = new;
			return (new);
		}
		idx++;
		*h = (*h)->next;
	}

	return (NULL);
}
