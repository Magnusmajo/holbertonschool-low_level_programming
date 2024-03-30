#include "lists.h"

/**
* add_dnodeint - adds a new node at the
* beginning of a dlistint_t list.
* @head: entry pointer of a pointer to the head
* @n: entry int
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!*head)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		prev_node = *head;
		(*head)->prev = new_node;
		new_node->next = prev_node;
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
