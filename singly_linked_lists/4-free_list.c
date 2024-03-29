#include "lists.h"

/**
 *free_list - free the linked list
 *@head: entry struct to free
 */

void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
