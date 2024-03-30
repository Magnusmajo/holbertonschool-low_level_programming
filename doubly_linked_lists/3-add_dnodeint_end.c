#include "lists.h"

/**
* add_dnodeint_end - adds a new node
* at the end of a dlistint_t list.
* @head: Entry pointer
* @n: Entry integer
* Return: New node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

		while (prev_node->next)
		{
			prev_node = prev_node->next;
		}

		new_node->next = NULL;
		new_node->prev = prev_node;
		prev_node->next = new_node;
	}

	return (new_node);
}
