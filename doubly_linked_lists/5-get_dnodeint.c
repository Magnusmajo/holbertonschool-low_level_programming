#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node of the index
 * @head: entry pointer
 * @index: entry index
 * Return: the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head; c++)
		head = head->next;

	if (!head)
	{
		return (NULL);
	}

	return (head);
}
