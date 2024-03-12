#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alocate memory of entry size
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
