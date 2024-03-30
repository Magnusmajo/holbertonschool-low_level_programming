#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - count all nodes in a double linked list
 * @h: entry pointer to first node
 * Return: number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h; c++)
	{
		h = h->next;
	}

	return (c);

}
