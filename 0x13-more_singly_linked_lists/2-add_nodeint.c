#include "lists.h"

/**
 * add_nodeint - main block
 * @h: list head
 * @n: number to be added to the node
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *h;
	*h = new;
	return (new);
}
