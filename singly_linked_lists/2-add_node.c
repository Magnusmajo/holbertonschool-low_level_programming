#include "lists.h"

/**
 * _strlen - Count the size of the string
 * @s: Entry String
 * Return: Number of chars in the entry string
 */
size_t _strlen(const char *s)
{
	size_t c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
* add_node -  adds a new node at the beginning of a list_t list.
* @head: Entry pointer of a pointer to the head
* @str: Entry string
* Return: New node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(str);
	node->next = *head;
	*head = node;

	return (node);

}
