#include "main.h"
#include "stdlib.h"

/**
 * array_range - creates an array of integers.
 * @min: Entry int.
 * @max: Entry int.
 * Return: Pointer the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		ptr[i] = min + i;

	return (ptr);

}
