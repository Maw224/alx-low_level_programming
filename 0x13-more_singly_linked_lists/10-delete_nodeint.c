#include "lists.h"

/**
 * delete_nodeint_at_index - main block
 * @h: pointer to list header
 * @index: index
 * Return: 1 success, -1 failure
 */

int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *temp;

	while (*h)
	{
		if (idx == index - 1)
		{
			temp = (*h)->next;
			(*h)->next = temp->next;
			free(temp);
			return (1);
		}
		idx++;
		*h = (*h)->next;
	}

	return (-1);
}
