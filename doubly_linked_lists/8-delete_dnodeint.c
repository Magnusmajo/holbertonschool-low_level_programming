#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 * @head: Entry pointer
 * @index: Entry index
 * Return: 1 success -1 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c;
	dlistint_t *aux_n;

	aux_n = *head;

	for (c = 0; c < index && aux_n->next; c++)
		aux_n = aux_n->next;

	if (!aux_n)
		return (-1);

	else if (!aux_n->next && !aux_n->prev)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	else if (index == 0)
	{
		aux_n->next->prev = NULL;
		*head = aux_n->next;
		free(aux_n);
		return (1);
	}
	else if (!aux_n->next)
	{
		aux_n->prev->next = NULL;
		free(aux_n);
		return (1);
	}

	aux_n->prev->next = aux_n->next;
	aux_n->next->prev = aux_n->prev;
	free(aux_n);

	return (1);

}
