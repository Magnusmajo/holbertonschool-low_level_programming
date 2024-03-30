#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Entry pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
