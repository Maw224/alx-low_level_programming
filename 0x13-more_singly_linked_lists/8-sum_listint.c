#include "lists.h"

/**
 * sum_listint - main block
 * @h: pointer to list header
 * Return: sum of data in the list
 */

int sum_listint(listint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
