#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements
 * of a dlistint_t list.
 * @h: entry pointer to first node
 * Return: n°of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c;

	for (c = 0; h; c++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (c);

}
