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
	listint_t *temp = *h, *to_delete;

	while (idx < (index - 1))
	{
		if (!(temp->next))
			return (-1);
		temp = temp->next;
		idx++;
	}

	to_delete = temp->next;
	temp->next = to_delete->next;
	free(to_delete);
	return (1);
}
