#include "lists.h"

/**
 * free_listint2 - main block
 * @h: pointer to pointer to list head
 */

void free_listint2(listint_t **h)
{
	listint_t *temp;

	if (!(*h))
		return;

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	h = NULL;
}
