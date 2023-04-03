#include "lists.h"

/**
 * delete_nodeint_at_index - main block
 * @h: pointer to list header
 * @index: index
 * Return: 1 success, -1 failure
 */

int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
	unsigned int idx;
	listint_t *temp, *copy = *h;

	if (!copy)
		return (-1);

	if (index == 0)
	{
		*h = (*h)->next;
		free(copy);
		return (1);
	}

	for (idx = 0; idx < (index - 1); idx++)
	{
		if (!(copy->next))
			return (-1);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
