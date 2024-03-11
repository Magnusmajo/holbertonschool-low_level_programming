#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: Entry String
 * @s2: Entry String
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int n_1, n_2, sum = 0, n_3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n_1 = 0; s1[n_1] != '\0'; n_1++)

	for (n_2 = 0; s2[n_2] != '\0'; n_2++)

	sum = n_1 + n_2;

	p = malloc(sum + sizeof(char));

	if (p == 0)
		return (NULL);

	for (n_3 = 0; n_3 < sum; n_3++)
	{
		if (n_3 <= n_1 - 1)
			p[n_3] = s1[n_3];
		if (n_3 <= n_2)
			p[n_3 + n_1] = s2[n_3];
	}

	return (p);
}
