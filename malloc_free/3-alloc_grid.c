#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - 2 dimensional array of integers.
 * @width: entry width
 * @height: entry height
 * Return: NULL on failure,
 */

int **alloc_grid(int width, int height)
{
	int a, b, c;
	int **p_array;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	p_array = malloc(height * sizeof(int *));

	if (p_array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		p_array[a] = malloc(width * sizeof(int));

		if (p_array[a] == NULL)
		{
			for (c = a - 1; c >= 0; c--)
				free(p_array[c]);

			free(p_array);
			return (NULL);
		}

		for (b = 0; b < width; b++)
		{

			p_array[a][b] = 0;
		}
	}
	return (p_array);
}
