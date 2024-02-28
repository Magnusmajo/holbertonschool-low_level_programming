#include "main.h"

/**
 * _strcmp - compare to strings
 * @s1: the string to compare agenst.
 * @s2: the string to compare.
 *
 * Return: a int value.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
