#include "lists.h"

/**
 * listint_len - main block
 * @h: list head
 * Return: size of list (len)
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
