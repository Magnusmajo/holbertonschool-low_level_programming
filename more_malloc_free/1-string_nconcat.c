#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: entry unsigned int.
 * Return: If function fails - NULL.
 * otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = n, m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m]; m++)
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	i = 0;

	for (m = 0; s1[m]; m++)
		p[i++] = s1[m];

	for (m = 0; s2[m] && m < n; m++)
		p[i++] = s2[m];

	p[i] = '\0';

	return (p);
}
