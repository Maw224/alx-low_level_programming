#include "lists.h"

/**
 * free_list - main block
 * @head: list head
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head->next)
	{
		list = *head;
		free(head);
	}
}
