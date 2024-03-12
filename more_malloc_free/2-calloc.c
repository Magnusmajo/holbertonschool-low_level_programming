#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * of nmemb elements of size bytes each and
 * returns a pointer to the allocated memory.
 * @nmemb: Entry unsigned int
 * @size: Entry unsigned int
 * Return: if size 0, NULL || if fails Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	p = malloc(nmemb * size);

	if (p == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
