#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: Entry size of the array
 * @c: Entry char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int count;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		ptr[count] = c;

	return (p);
}
