#include "lists.h"

/**
 * free_listint - main block
 * @h: pointer to list head
 */

void free_listint(listint_t *h)
{
	listint_t *temp;

	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
