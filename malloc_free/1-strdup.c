#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: Entry pointer
 * Return: Pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *p;
	int a, b;

	if (str == 0)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	p = malloc(a * sizeof(char));

	if (p == 0)
		return (NULL);

	for (b = 0; b < a; b++)
		p[b] = str[b];

	return (p);
}
