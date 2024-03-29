#include "lists.h"
#include <string.h>

/**
* _strlen - count the size of a str
* @s: entry string
* Return: n°of char in entry string
*/

size_t _strlen(const char *s)
{
	size_t c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
* *add_node_end - Adds a new node at the end of a list_t list.
* @head: Entry pointer
* @str: Entry str
* Return: New node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
