#include "lists.h"

/**
 * pop_listint - main block
 * @h: pointer to pointer to list head
 * Return: value of removed node
 */

int pop_listint(listint_t **h)
{
	int n;
	listint_t *temp;

	temp = (*h)->next;
	n = (*h)->n;
	free(*h);
	*h = temp;
	return (n);
}
