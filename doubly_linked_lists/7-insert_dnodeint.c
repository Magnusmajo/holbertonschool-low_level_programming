#include "lists.h"
#include <stdio.h>

/**
 *insert_dnodeint_at_index - insert a node in a especific position
 *@h: entry pointer to a head nodei
 *@idx: entry index position
 *@n: entry data int
 *Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c;
	dlistint_t *new_n, *aux_n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	aux_n = *h;

	for (c = 0; c < idx; c++)
	{
		if (!aux_n->next && !aux_n->prev)
			return (NULL);
		else if (!aux_n->next)
			return (add_dnodeint_end(h, n));

		aux_n = aux_n->next;
	}

	new_n = malloc(sizeof(dlistint_t));

	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = aux_n;
	new_n->prev = aux_n->prev;
	aux_n->prev->next = new_n;
	aux_n->prev = new_n;

	return (new_n);

}
