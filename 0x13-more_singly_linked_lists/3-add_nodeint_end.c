#include "lists.h"

/**
 * add_nodeint_end - main block
 * @h: pointer to pointer header
 * @n: number to be added to list
 * Return: pointer to node
 */

listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*h))
		*h = new;
	else
	{
		temp = *h;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
