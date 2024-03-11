#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings.
 *@s1: Entry string.
 *@s2: Entry string.
 *Return: newly array with content of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int a, b, result = 0, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	result = a + b;

	p = malloc(result + sizeof(char));

	if (p == 0)
		return (NULL);

	for (c = 0; c < result; c++)
	{
		if (c <= a - 1)
			p[c] = s1[c];
		if (c <= b)
			p[c + a] = s2[c];
	}

	return (p);
}
