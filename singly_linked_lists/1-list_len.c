#include "lists.h"

/**
 * list_len - Count the numbers of elements in a
 * linked list
 * @h: Entry point to the 1rst node
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t c;

	for (c = 0; h != NULL; c++)
		h = h->next;

	return (c);
}
