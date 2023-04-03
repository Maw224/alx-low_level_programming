#include "lists.h"

/**
 * get_nodeint_at_index - main block
 * @h: pointer to list head
 * @index: index to get
 * Return: pointer to the node at the index;
 */

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int idx = 0;

	while (h)
	{
		if (idx == index)
			return (h);
		idx++;
		h = h->next;
	}

	return (NULL);
}
